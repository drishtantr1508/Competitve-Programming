#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization ("unroll-loops")
#include<bits/stdc++.h>
#define int long long
#define ll long long
#define pf push_front
#define pb push_back
#define pii pair<int,int>
#define endl '\n'
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define pi acos(-1)
using namespace std;
const long long MOD=1e9+7;
const long long M=1e17;
const long long N=1e5+10;

void solve()
{
	int n;
	cin>>n;

	int arr[n],b[n];
	map <int,vector<int>> odd,even;

	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		b[i]=arr[i];
		if(i&1)
			odd[arr[i]].pb(i);
		else
			even[arr[i]].pb(i);
	}

	sort(b,b+n);

	for(int i=0;i<n;i++)
	{
		int x = b[i];
		int idx = i;

		if(idx&1)
		{
			if(odd[x].empty())
			{
				cout<<"NO";
				return;
			}

			odd[x].pop_back();
		}

		else
		{
			if(even[x].empty())
			{
				cout<<"NO";
				return;
			}

			even[x].pop_back();
		}
	}

	cout<<"YES";
	return;
}

signed main()
{
	fastio;
	int t=1;
	cin>>t;
	while(t--)
	{
		solve();
		cout<<"\n";
	}

	return 0;
}