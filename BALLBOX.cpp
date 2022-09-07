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
		ll n,k;
		cin>>n;
		vector<ll> a(n);
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
		}
		cin>>k;
		unordered_set<ll> b;
		for (int i = 0; i < k; ++i)
		{
			ll x;
			cin>>x;
			b.insert(x);
		}
		// vector<ll> ans;
		for (int i = 0; i < n; ++i)
		{
			if(b.find(a[i]) == b.end()){
				cout<<a[i]<<sp;
			}
		}
		cout<<endl;
    }
    return 0;
}