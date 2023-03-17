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
	for (int i = 0; i < n; ++i)
	{
		cin >> v[i];
	}
	sort(all(v));
	vll ans1(n), ans2(n);
	for (int i = 0; i < n - 1; ++i)
	{
		ans1[i] = v[i + 1];
	}
	ans1[n - 1] = v[0];
	for (int i = 1; i < n; ++i)
	{
		ans2[i] = v[i - 1];
	}
	ans2[0] = v[n - 1];
	int t1 = LLONG_MAX, t2 = LLONG_MAX;
	for (int i = 1; i < n; ++i)
	{
		t1 = min(t1, abs(ans1[i] - ans1[i - 1]));
		t2 = min(t2, abs(ans2[i] - ans2[i - 1]));
	}
	reverse(all(v));
	if (ans1 == v && ans2 == v) {
		cout << -1 << nn;
	}
	else if (ans1 == v) {
		for (int i = 0; i < n; ++i)
		{
			cout << ans2[i] << sp;
		}
	}
	else if (ans2 == v) {
		for (int i = 0; i < n; ++i)
		{
			cout << ans1[i] << sp;
		}
	}
	else if (t1 < t2) {
		for (int i = 0; i < n; ++i)
		{
			cout << ans1[i] << sp;
		}
	}
	else {
		for (int i = 0; i < n; ++i)
		{
			cout << ans2[i] << sp;
		}
	}
	nl;
}

int32_t main()
{
	deep_aman;
	ll testcase = 1;
	cin >> testcase;
	while (testcase--) solve();
	return 0;
}