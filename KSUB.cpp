#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vll vector <long long int>
#define cyes cout<<"YES"<<endl
#define cno cout<<"NO"<<endl
#define sp " "
#define nn '\n'
#define const mod 1e9+7


int main()
{
    ll testcase;
    testcase =1;
    cin >> testcase;
    while (testcase--)
    {
		ll n,k;
		cin>>n>>k;
		vll v(n);
		for(ll i=0;i<n;i++) {cin>>v[i];}
		ll g=v[0];
		for(ll i=1;i<n;i++){
		    g = __gcd(g,v[i]);
		}
		ll gc= 0;
		ll count=0;
		for (int i = 0; i < n; ++i)
		{
				gc = __gcd(gc,v[i]);
				if(gc==g){
					count++;
					gc=0;
				}
		}
		if(count>=k){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
    }
    return 0;
}