#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int> v(n);
        for (int i = 0; i < n; ++i)
        {
            cin>>v[i];
        }
        long long ans = 0;
        long long count = 0;
        for (int i = 0; i < n; ++i)
        {
            if (v[i] != 0)
            {
                count++;
            }
            else{
                ans+= (count*1LL*(count+1))/2;
                count = 0;
            }
            
        }
        ans+= (count*1LL*(count+1))/2;
        cout<<ans<<endl;
    }

    return 0;
}