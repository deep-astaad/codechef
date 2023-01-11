#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vll vector <long long int>
#define cyes cout<<"YES"<<endl
#define cno cout<<"NO"<<endl
#define sp " "
#define nn '\n'
// #define mod 1e9+7
// queue<ll> q;


void printDivisors(ll n, vector<ll> &v)
{
    // st.insert(n);
    for (ll i=1; i<=(n); i++)
    {
        if (n%i == 0)
        {
            // if (n/i == i) {
            //         v.push_back(i);
            // }
            // else { 
                v.push_back(i);
                // v.push_back((n/i));
            // }
        }
    }
    return ;
}

int main()
{
    ll mod = 1e9 + 7;
    ll testcase;
    testcase = 1;
    cin >> testcase;
    while (testcase--)
    {
        unordered_set<ll> st;
        vector<ll> v;
        ll n,k; cin>>n>>k;
        while(--k){
        	// v.push_back(n);
            n=(n*n);
        }
        // cout<<n<<nn;
        printDivisors(n,v);
        ll sum=0;
        // sort(v.begin(),v.end());
        for (int i = 1; i < v.size(); ++i)
        {
        	// sum=sum+v[i]*v[i-1]+v[i]*v[i]
        	// sum = ((sum%(mod)) + ((v[i]*v[i])%(mod)) + (v[i]*v[i-1])%mod)%(mod);
        	// cout<<sum<<nn;
        	sum = ((sum%(mod)) + ((v[i]*v[i])%(mod)) + (v[i]*v[i-1])%mod)%(mod);
        	// st.insert(v[i]);
            // sum += v[i];
            // cout<<v[i]<<sp;
        }

        cout<<(sum%mod)<<endl;
        // cout<<nn;
    }
    return 0;
}