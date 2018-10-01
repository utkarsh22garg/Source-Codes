#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define deb(x) cout << "Debug: ------> " << #x << "=" << x << endl
#define deb2(x, y) cout << "Debug: ------> "<< #x << "=" << x << "     " << #y << "=" << y << endl
#define pb push_back
#define rep(i,n) for (int i=0;i<n;i++)
#define Rep(i,a,b) for (int i=a;i<b;i++)
#define repr(i,n) for (int i=n;i>=0;i--)

#define setarr(x,i) memset(x,i,sizeof(x))

typedef vector<int> vi;
typedef vector<ll int > vl;
typedef vector<pair<ll,ll> > vll;
typedef vector<pair<int,int> > vii;
const int N = 1e5+5;

vi adj[N];

int len[N]={0};

int p[1000][100]={0};


int get_lca(int u,int v)
{
	if(len[u]<len[v]) swap(u,v);

	int k=log2((double)len[u]);


	// bringing u to the same level of v

	repr(i,k)
	{
		if((len[u]-(1<<i))>=len[v])
		{
			u=p[u][i];
		}
	}


	repr(i,k)
	{
		if(p[u][i]!=-1&&p[u][i]!=p[v][i])
		{
			u=p[u][i];
			v=p[v][i];
		}
	}

	return p[u][0];

}

void dfs(int node,int par)
{
	len[node]=len[par]+1;

	p[node][0]=(par)?par:-1;

	for(int i:adj[node])
	{
		if(i!=par)
		{
			dfs(i,node);
		}
	}

	return ;
}

int main()
{
	//freopen("input.txt","r",stdin);

	int n,q;
	cin >> n >> q;

	Rep(i,1,n)
	{
		int u,v;
		cin >> u >> v;
		adj[u].pb(v);
		adj[v].pb(u);
	}

	len[0]=-1;

	setarr(p,-1);

	dfs(5,0);

	Rep(i,1,21)
	{
		Rep(j,1,n+1)
		{
			if(p[j][i-1]!=-1)
			{
				p[j][i]=p[p[j][i-1]][i-1];
			}
		}
	}

	while(q--)
	{
		int u,v;
		cin >> u >> v;
		
		cout << get_lca(u,v) << endl;
		
	}

}