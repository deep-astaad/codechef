#include <bits/stdc++.h>
using namespace std;

int func(vector<int> v,int i,int n,int sum){
    if(i == n-1){
        return v[i];
    }
    sum += func(v,i+1,n, sum);
    sum += (v[i]*func(v,i+1,n, sum));
    return sum;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        vector<int> v(n);
        for (int i = 0; i < n; ++i)
        {
            cin>>v[i];
        }
        int ans = func(v,0,n,0);
        cout<<ans<<endl;
    }

    return 0;
}