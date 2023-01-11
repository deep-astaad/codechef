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


void printDivisors(ll n, vector<ll> &v, unordered_set<ll> &st)
{
    st.insert(n);
    for (ll i=1; i<=sqrt(n); i++)
    {
        if (n%i == 0)
        {
            if (n/i == i) {
                if(st.find(i*n) == st.end()){
                    v.push_back(i*n);
                }
            }
            else { 
                if(st.find(i*n)==st.end()){
                    v.push_back(i*n);
                }
                if(st.find(n*(n/i))==st.end()){
                    v.push_back(n*(n/i));
                }
            }
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
        // cout<<n<<sp<<k<<nn;
        v.push_back(n);
        while(k--){
            // cout<<k<<nn;
            // cout<<v.size()<<nn;
            ll n= v.size();
            for (int i = 0; i < n; ++i)
            {
                // cout<<i<<nn;
                if (st.find(v[i]) == st.end())
                {
                    printDivisors(v[i],v,st);
                }
            }
        }
        // v.push_back(10);
        // printDivisors(10);
        ll sum=0;
        for (int i = 0; i < v.size(); ++i)
        {
            sum = ((sum%(mod)) + (v[i]%(mod)))%(mod);
            // sum += v[i];
            // cout<<v[i]<<sp;
        }

        cout<<(sum%mod)<<endl;
        // cout<<nn;
    }
    return 0;
}