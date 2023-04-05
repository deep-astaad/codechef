/* Code by : Aman Deep (deep_aman) */
#include <bits/stdc++.h>
using namespace std;
#define deep_aman ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long int
const int mod = 1e9 + 7;

#define TESTCASE

int __pow(int n, int p){
	int ans=1;
	for (int i = 0; i < p; ++i)
	{
		ans*=n;
		ans%=mod;
	}
	return ans;
}

int __bitcount(int n){
	int ans=0;
	while(n){
		if(n&1) ans++;
		n=n>>1;
	}
	return ans;
}

void solve()
{
	int n; cin>>n;
	int bits = __bitcount(n);
	if(bits<3){
		cout<<0<<'\n';
		return;
	}
	int ans;
	ans=__pow(3,bits);
	ans -= (3*__pow(2,bits))%mod;
	if(ans<0) ans+=mod;
	ans += (3*__pow(1,bits))%mod;
	cout<<ans<<'\n';
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