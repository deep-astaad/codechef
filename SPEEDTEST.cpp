#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector <long long>
#define cyes cout<<"YES"<<endl
#define cno cout<<"NO"<<endl
#define sp " "
#define nn '\n'

ll gcd(ll a, ll b)
{
    ll result = min(a, b);
    while (result > 0) {
        if (a % result == 0 && b % result == 0) {
            break;
        }
        result--;
    }
    return result;
}

int main()
{
    
    ll t;
    cin >> t;
    while (t--)
    {
		ll a,b,x,y;
		cin>>a>>x>>b>>y;
        ll lcm = (a*b)/(gcd(a,b));
        ll ta = lcm/a;
        a = a*ta;
        x*=ta;
        ll tb = lcm/b;
        b = b*tb;
        y*=tb;
        if(x==y){
            cout<<"Equal"<<endl;
        }
        else if(x<y){
            cout<<"Alice"<<endl;
        }
        else {
            cout<<"Bob"<<endl;
        }
    }
    return 0;
}