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
	int n;
	cin >> n;
	vi trees;
	
	rep(i,n)
	{
		ll int h;
		cin >> h;
		trees.pb(h);
	}


	ll int time=trees[0];

	rep(i,n)
	{
		time+=1;
		//deb2(time,i);
		if(i!=n-1)
		{
			if(trees[i+1]>=trees[i])
			{
				time+=(trees[i+1]-trees[i]+1);
			}
			else
			{
				time+=((trees[i]-trees[i+1])+1);
			}
		}
	}

	cout << time << endl;

}