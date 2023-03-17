/* Code by : Aman Deep (deep_aman/astaad) */
#include <bits/stdc++.h>
using namespace std;
#define deep_aman ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define int long long int
#define pb push_back
#define ff first
#define ss second
#define sp ' '
#define nn '\n'
//     The greatest success comes from the freedom to fail
//                                                        ~ Mark Zuckerberg
/*

*/
void func(int node, vector<vector<pair<int, int>>> &adj, vector<int> &costs, int parent) {
	for (auto p : adj[node])
	{
		int v = p.ff, w = p.ss;
		if (v != parent) {
			costs[v] = costs[node] ^ w;
			func(v, adj, costs, node);
		}
	}
}
void solve()
{
	int n; cin >> n;
	vector<vector<pair<int, int>>> adj(n);
	for (int i = 1; i < n; ++i)
	{
		int x, y, w; cin >> x >> y >> w;
		adj[x - 1].pb({y - 1, w});
		adj[y - 1].pb({x - 1, w});
	}
	// path cost from node 1
	vector<int> costs(n, 0);
	func(0, adj, costs, 0);
	unordered_map<int, pair<int, int>> mp;
	for (int i = 0; i < n - 1; ++i)
	{
		for (int j = i + 1; j < n; ++j)
		{
			int cost = costs[i] ^ costs[j];
			if (mp.count(cost)) {
				cout << i + 1 << sp << j + 1 << sp << mp[cost].ff + 1 << sp << mp[cost].ss + 1 << nn;
				return;
			}
			mp[cost] = {i, j};
		}
	}
	cout << -1 << nn;
}

int32_t main()
{
	deep_aman;
	ll testcase = 1;
	cin >> testcase;
	while (testcase--) solve();
	return 0;
}