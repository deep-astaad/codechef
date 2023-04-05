/* Code by : Aman Deep (deep_aman) */
#include <bits/stdc++.h>
using namespace std;
#define deep_aman ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long int
#define ll long long
#define vll vector <long long>
#define all(x) (x).begin(), (x).end()
#define pll pair <long long, long long>
#define vvll vector <vector <long long>>
#define vpll vector <pair <long long, long long>>
#define pb push_back
#define ff first
#define ss second
#define sp ' '
#define endl '\n'
#define nl cout << '\n'
#define cyes cout << "YES\n"
#define cno cout << "NO\n"
#define nn '\n'
const ll mod = 1e9 + 7;
//     The greatest success comes from the freedom to fail
//                                                        ~ Mark Zuckerberg
/*

*/

#define TESTCASE
void solve()
{
	int n,k; cin>>n>>k;
	vector<string> v(n),f(n);
	vll freq1(10),freq2(10);
	for (int i = 0; i < n; ++i)
	{
		string s; cin>>s;
		v[i]=s;
		for(auto it : s)
		{
			freq1[it-'0']++;
		}
	}
	for (int i = 0; i < n; ++i)
	{
		string s; cin>>s;
		f[i]=s;
		for(auto it : s)
		{
			freq2[it-'0']++;
		}
	}
	int cnt=0;
	for (int i = 0; i < 10; ++i)
	{
		if(freq2[i]>freq1[i]){
			cnt+=freq2[i]-freq1[i];
		}
	}
	for (int i = 0; i < n; ++i)
	{
		if(v[i].size()!=f[i].size()){
			cno;
			return;
		}
	}
	if(cnt<=k) cyes;
	else cno;
}

int32_t main()
{
	deep_aman;
	int testcase = 1;
	#ifdef TESTCASE
		cin >> testcase;
	#endif
	while (testcase--) solve();
	return 0;
}