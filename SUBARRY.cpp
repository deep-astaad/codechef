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
		ll mn = LLONG_MAX,mx=LLONG_MIN,nzmax;
		for (int i = 0; i < n; ++i)
		{
			cin>>v[i];
			if (mn>v[i])
			{
				mn = v[i];
			}
			if (mx<v[i])
			{
				mx = v[i];
			}
		}
		cout<<min(mn*mx,min(mn*mn,mx*mx))<<sp;
		cout<<max(mx*mx,max(mn*mn,mn*mx))<<nn;
    }
    return 0;
}