#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector <long long>
#define cyes cout<<"YES"<<endl
#define cno cout<<"NO"<<endl
#define sp " "
#define nn '\n'
ll countDistinct(vector<ll> v1,vector<ll> v2)
{
    unordered_set<int> s;
    for (ll i = 0; i < v1.size(); i++)
       s.insert(v1[i]);
    for (int i = 0; i < v2.size(); ++i)
    	s.insert(v2[i]);
    return s.size();
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
		ll n; cin>>n; vll g(n),w(n); map<ll,ll> mp1,mp2; vll ans(n,0); vector<vector<ll>> v1(n),v2(n); vector<ll> temp1,temp2; unordered_set<ll> st;
		for (int i = 0; i < n; ++i) {cin>>g[i]; mp1[g[i]]=i;}
		for (int i = 0; i < n; ++i) {cin>>w[i]; mp2[w[i]]=i;}
		
		auto prev = mp1.begin();
		for (auto it=mp1.begin();it != mp1.end(); ++it)
		{
			if(it->first == prev->first){
				v1[it->second]=temp1;
			}
			else{
				temp1.push_back(prev->second);
				v1[it->second]=temp1;
			}
			prev=it;
		}
		prev = mp2.begin();
		st.clear();
		for (auto it=mp2.begin();it != mp2.end(); ++it)
		{
			if(it->first == prev->first){
				v2[it->second]=temp2;
			}
			else{
				temp2.push_back(prev->second);
				v2[it->second]=temp2;
			}
			prev=it;
		}
		for (int i = 0; i < n; ++i) // O(n);
		ans[i]=countDistinct(v1[i],v2[i]);  //O(n);  O(n^2)
		int mx=*max_element(ans.begin(),ans.end());
		int count=0;
		for(int i=0;i<n;i++)
		{
			if(ans[i]==mx)
				count++;
		}
		cout<<count<<nn;
    }
    return 0;
}