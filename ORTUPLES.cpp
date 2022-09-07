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
		ll p,q,r;
		cin>>p>>q>>r;
		vector<ll> v(3);
		v[0]=p;
		v[1]=q;
		v[2]=r; 
		sort(v.begin(),v.end());
		int cz=0;
		for (int i = 0; i < 3; ++i)
		{
			if (v[i]==0)
			{
				cz++;
			}
		}
		if (cz==3)
		{
			cout<<1;
		}
		else if(cz==2){
			cout<<0;
		}
		else if(cz==1){
			if(v[1]==v[2]) cout<<1;
			else{ cout<<0; }
		}
		else{
			ll ans=1;
			while(v[2]){
				int one=0;
				if(p&1) one++;
				if(q&1) one++;
				if(r&1) one++;
				p=p>>1;
				q=q>>1;
				r=r>>1;
				v[2]=v[2]>>1;
				cout<<one<<sp;
				if(one==1) {
					ans=0;
					break;
				}
				else if(one==3){
					ans=ans*4;
				}
			}
			cout<<ans;
		}
		cout<<endl;
    }
    return 0;
}