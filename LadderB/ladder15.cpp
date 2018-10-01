#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define deb(x) cout << "Debug: ------> " << #x << "=" << x << endl
#define deb2(x, y) cout << "Debug: ------> "<< #x << "=" << x << "," << #y << "=" << y << endl
#define pb push_back
#define rep(i,n) for (int i=0;i<n;i++)

typedef vector<ll int > vi;
typedef vector<pair<ll,ll> > vll;
typedef vector<pair<int,int> > vii;

int main()
{
	int n,s,t;
	cin >> n >> s >> t;

	int idx[n+1]={0};

	rep(i,n)
	{
		int a;
		cin >> a;
		idx[i+1]=a;
	}

	int vis[n+1]={0};

	memset(vis,0,sizeof(vis));

	int count=0;

	int curr=s;

	while(curr!=t&&!vis[idx[curr]])
	{
		count++;
		//deb(curr);
		vis[curr]=1;
		curr=idx[curr];
	}

	if(curr==t)
	cout << count << endl;
	else
	cout << -1 << endl;
}