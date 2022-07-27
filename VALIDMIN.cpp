#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        std::vector<int> v(3);
        for (int i = 0; i < 3; ++i)
        {
            cin>>v[i];
            // cout<<v[i]<<" ";
        }
        sort(v.begin(),v.end());
        if (v[0] == v[1])
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}