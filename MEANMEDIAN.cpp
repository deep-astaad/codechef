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
		/*Write Code Here*/ 
		ll x,y;
		cin>>x>>y;
		vector<int> v(3);
		v[0]=y;
		v[1]=y;
		v[2]=x-2*y;
		sort(v.begin(),v.end());
		for (int i = 0; i < 3; ++i)
		{
			cout<<v[i]<<sp;
		}
		cout<<nn;
		// cout<<0<<sp<<y<<sp<<(3*x)-y<<endl;
    }
    return 0;
}