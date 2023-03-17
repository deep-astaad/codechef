/* Code by : Aman Deep (deep_aman/astaad) */
#include <bits/stdc++.h>
using namespace std;
#define deep_aman ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define int long long int
#define vll vector <long long>
#define pll pair <long long, long long>
#define vvll vector <vector <long long>>
#define vpll vector <pair <long long, long long>>
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define ff first
#define ss second
#define sp ' '
#define endl '\n'
#define nn '\n'
#define cyes cout << "YES\n";
#define cno cout << "NO\n";
#define nl cout << '\n';
const ll mod = 1e9 + 7;
//     The greatest success comes from the freedom to fail
//                                                        ~ Mark Zuckerberg
/*

*/
void solve()
{
	int n; cin >> n;
	vll v(n);
	int ones = 0;
	for (int i = 0; i < n; ++i)
	{
		cin >> v[i];
		if (v[i]) ones++;
	}
	if (n % 2) {
		cout << -1 << nn;
	}
	else if (n == 2 && ones != 1) {
		cout << -1 << nn;
	}
	else {
		if (n - ones == ones) {
			cout << 0 << nn;
		}
		else if (n - ones > ones) {
			cout << (n - 2 * ones) / 2 << nn;
		}
		else {
			int diff = 2 * ones - n;
			diff /= 2;
			if (diff % 2 == 0) {
				cout << diff / 2 << nn;
			}
			else if (diff % 2 == 1) {
				cout << (diff + 1) / 2 + 1 << nn;
			}
		}
	}
}

int32_t main()
{
	deep_aman;
	ll testcase = 1;
	cin >> testcase;
	while (testcase--) solve();
	return 0;
}