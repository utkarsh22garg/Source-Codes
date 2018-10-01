#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define MOD 1000000007

typedef vector<pair<ll,ll> > vll;
typedef vector<pair<int,int> > vii;

int main()
{
	ll int x,y,n;
	cin >> x >> y >> n;

	if(n==1)
	{
		cout << (x+2*MOD)%MOD << endl;
		return 0;
	}
	else if(n==2)
	{
		cout << (y+2*MOD)%MOD << endl;
		return 0;
	}
	else if(n==3)
	{
		cout << (y-x+2*MOD)%MOD << endl;
		return 0;
	}

	ll int ans=2*MOD;

	switch(n%6)
	{
		case 3: ans=(ans+y-x)%MOD;
				break;
		case 4: ans=(ans-x)%MOD;
				break;
		case 5: ans=(ans-y)%MOD;
				break;
		case 0: ans=(ans-y+x)%MOD;
				break;
		case 1: ans=(ans+x)%MOD;
				break;
		case 2: ans=(ans+y)%MOD;
				break;
	}

	cout << ans << endl;
}