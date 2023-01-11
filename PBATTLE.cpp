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
		ll n; cin>>n;
		vll g(n),w(n);
		map<ll,ll> mp;
		for (int i = 0; i < n; ++i) cin>>g[i];
		for (int i = 0; i < n; ++i) cin>>w[i];
		for (int i = 0; i < n; ++i) mp[g[i]]=w[i];
		ll ans = 1;
		ll mx=mp.rbegin()->second;
		for (auto it=mp.rbegin(); it != mp.rend(); it++)
		{
			if(it->second>mx) {ans++; mx = it->second;}
		}
		cout<<ans<<endl;
		// for (int i = 0; i < n; ++i) {cin>>g[i]; mp1[g[i]]=i;}
		// for (int i = 0; i < n; ++i) {cin>>w[i]; mp2[w[i]]=i;}
		// for (int i = 0; i < n; ++i) { mp1[g[i]]=i; mp2[w[i]]=i; }
		// for (auto it=mp2.begin())
		// {
		// 	/* code */
		// }

		// vll ans(n,0);
		// vector<unordered_set<ll>> v1(n),v2(n);
		// unordered_set<ll> st;
		// auto prev = mp1.begin();
		// for (auto it=mp1.begin();it != mp1.end(); ++it)
		// {
		// 	if(it->first == prev->first){
		// 		v1[it->second]=st;
		// 		// v1[it->second].insert(v1[prev->second].begin(),v1[prev->second].end());
		// 	}
		// 	else{
		// 		// v1[it->second].insert(v1[prev->second].begin(),v1[prev->second].end());
		// 		// v1[it->second].insert(prev->second);
		// 		st.insert(prev->second);
		// 		v1[it->second]=st;
		// 	}
		// 	prev=it;
		// }
		// prev = mp2.begin();
		// st.clear();
		// for (auto it=mp2.begin();it != mp2.end(); ++it)
		// {
		// 	if(it->first == prev->first){
		// 		// v1[it->second]=st;
		// 		// v2[it->second].insert(v2[prev->second].begin(),v2[prev->second].end());
		// 		v1[it->second].insert(st.begin(),st.end());
		// 	}
		// 	else{
		// 		// v2[it->second].insert(v2[prev->second].begin(),v2[prev->second].end());
		// 		// v2[it->second].insert(prev->second);
		// 		// v1[it->second]=st;
		// 		st.insert(prev->second);
		// 		v1[it->second].insert(st.begin(),st.end());
		// 	}
		// 	prev=it;
		// }
		// // for (auto it = v1[i].begin();it!=v1[i].end();it++)
		// // {
		// // 	cout<<*it<<sp;
		// // }
		// // for (auto it = v2[i].begin();it!=v2[i].end();it++)
		// // {
		// // 	cout<<*it<<sp;
		// // }
		// ll max = LLONG_MIN;
		// for (int i = 0; i < n; ++i)
		// {
		// 	// cout<<i<<":"<<sp;
		// 	// v1[i].insert(v2[i].begin(),v2[i].end());
		// 	// for (auto it = v1[i].begin();it!=v1[i].end();it++)
		// 	// {
		// 	// 	cout<<*it<<sp;
		// 	// }
		// 	ans[i]=v1[i].size();
		// 	if (max < ans[i])
		// 	{
		// 		max=ans[i];
		// 	}
		// 	// cout<<"size:"<<ans[i]<<nn;
		// 	// cout<<nn;
		// }
		// // for (int i = 0; i < n; ++i)
		// // {
		// // 	cout<<i<<":"<<sp;
		// // 	for (auto it = v2[i].begin();it!=v2[i].end();it++)
		// // 	{
		// // 		cout<<*it<<sp;
		// // 	}
		// // 	// ans[i]=v[i].size();
		// // 	// cout<<"size:"<<ans[i]<<nn;
		// // 	cout<<nn;
		// // }

		// // sort(ans.begin(),ans.end());
		// ll sol = 0;
		// for (int i = 0; i < ans.size(); ++i)
		// {
		// 	if(ans[i]==max) sol++;
		// }
		// cout<<sol<<nn;
		// cout<<nn;
    }
    return 0;
}