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
#define cyes cout << "Yes\n"
#define cno cout << "No\n"
#define nn '\n'
const ll mod = 1e9 + 7;
//     The greatest success comes from the freedom to fail
//                                                        ~ Mark Zuckerberg
/*

*/

#define TESTCASE
void solve()
{
	int n; cin>>n;
	string s; cin>>s;
	string ans1="1",ans2="0";
	for (int i = 1; i < n; ++i)
	{
		if(s[i-1]==ans1[i-1]){
			ans1+='0';
		}
		else{
			ans1+='1';
		}

		if(s[i-1]==ans2[i-1]){
			ans2+='0';
		}
		else{
			ans2+='1';
		}
	}
	int cnt1=0,cnt2=0;
	for (int i = 0; i < n; ++i)
	{
		if(ans1[i]=='1') cnt1++;
		if(ans2[i]=='1') cnt2++;
	}
	cout<<max(cnt1,cnt2)<<nn;


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