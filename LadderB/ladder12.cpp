#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back


typedef vector<pair<ll,ll> > vll;
typedef vector<pair<int,int> > vii;

int main()
{
	int n;
	cin >> n;
	vector<ll int > v;

	for(int i=0;i<n;i++)
	{
		ll int c;
		cin >> c;
		v.pb(c);
	}


	int idx=-1;

	for(int i=0;i<n-1;i++)
	{
		if(v[i]<=v[i+1])
		{
			continue;
		}
		else
		{
			idx=i+1;
			break;
		}
	}

	if(idx==-1)
	{
		cout << 0 << endl;
		return 0;
	}

	int flag=1;

	for(int i=idx;i<n-1;i++)
	{
		if(v[i]>v[i+1])
		{
			flag=0;
			break;
		}
	}

	if(!flag)
	{
		cout << -1 << endl;
	}
	else
	{
		if(v[n-1]<=v[0])
		cout << n-idx << endl;
		else
		cout << -1 << endl;
	}
}