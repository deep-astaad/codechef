#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vll vector <long long int>
#define cyes cout<<"YES"<<endl
#define cno cout<<"NO"<<endl
#define sp " "
#define nn '\n'
#define const mod 1e9+7

bool comp(int x, int y){
	return x>y;
}

int main()
{
    
    ll testcase;
    testcase = 1;
    cin >> testcase;
    while (testcase--)
    {
		vector<int> v(3);
		for(int i=0;i<3;i++) cin>>v[i];
		sort(v.begin(),v.end());
        if(v[0]>=3){
        	cout<<6<<nn;
        }
        else if(v[0]==2){
        	if(v[1]==2){
        		if(v[2]==2) cout<<4<<nn;
        		if(v[2]>=3) cout<<5<<nn;
        	}
        	if(v[1]>=3) cout<<5<<nn;
        }
        else if(v[0]==1){
        	if(v[1]==1) cout<<3<<nn;
        	if(v[1]>=2) cout<<4<<nn;
        }
        else if(v[0]==0){
        	if(v[1]==0){
        		if(v[2]==0) cout<<0<<nn;
        		if(v[2]>=1) cout<<1<<nn;
        	}
        	if(v[1]==1) cout<<2<<nn;
        	if(v[1]>=2) cout<<3<<nn;
        }
    }
    return 0;
}