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
	vector<int> v(3);
	for (int i = 0; i < 3; ++i)
	{
		cin>>v[i];
	}
	int x=(v[1]&v[2]);
	x^=v[2];
	x|=v[0];
	// cout<<x<<nn;
	for (int j = 0; j <= 10; ++j)
	{
		bool ok=true;
		for (int i = 1; i < 3; ++i)
		{
			if((v[i]^j)<=(v[i-1]^j)){
				ok=false;
			}
		}
		if(ok) cout<<j<<nn;
		// else cout<<-1<<nn;
	}
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