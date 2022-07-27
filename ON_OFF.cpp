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
        string s;
        cin>>s;
        string r;
        cin>>r;
        int count=0,count1=0;
        for (int i = 0; i < n; ++i)
        {
            if (s[i] == '1')
            {
                count++;
            }
        }
        for (int i = 0; i < n; ++i)
        {
            if (r[i] == '1')
            {
                count1++;
            }
        }
        if (abs(count1-count)%2 == 0)
        {
            cout<<1;
        }
        else{
            cout<<0;
        }
    }

    return 0;
}