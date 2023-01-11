#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector <long long>
#define cyes cout<<"YES"<<endl
#define cno cout<<"NO"<<endl
#define sp " "
#define nn '\n'



int main()
{
    
    ll t;
    cin >> t;
    while (t--)
    {
		ll n;
		cin>>n;
		vll v(n);
		for (int i = 0; i < n; ++i)
		{
			cin>>v[i];
		}
		ll ans = 0;
		unordered_map<ll,ll> mp;
		for (int i = 0; i < n; ++i)
		{
			mp[v[i]]++;
		}
		for (auto it=mp.begin();it!=mp.end();it++)
		{
			if (it->second>=2)
			{
				// ans+=nCr(it->second,2);
				ans+=((it->second)*(it->second-1))/2;
			}
		}
		cout<<ans<<endl;
    }
    return 0;
}