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
		ll x,y;
		cin>>x>>y;
		if (x<y)
		{
			cout<<"REPAIR"<<endl;
		}
		else if(x>y){
			cout<<"NEW PHONE"<<endl;
		}
		else{
			cout<<"ANY"<<endl;
		}
    }
    return 0;
}