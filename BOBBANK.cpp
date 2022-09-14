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
		ll w,x,y,z;
		cin>>w>>x>>y>>z;
		cout<<w+(x-y)*z<<endl;
    }
    return 0;
}