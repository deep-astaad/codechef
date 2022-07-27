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
        sort(v.begin(),v.end());
        vector<int> freq;
        int temp=1;
        for (int i = 0; i < n-1; ++i)
        {
            if (v[i] == v[i+1])
            {
                temp++;
                
            }
            else{
                freq.push_back(temp);
                // cout<<temp<<" ";
                temp=1;
            }
        }
        freq.push_back(temp);
        sort(freq.begin(),freq.end());
        if (freq.size() == 1)
        {
            if (freq[0]%2 == 0)
            {
                cout<<(freq[0]/2)<<endl;
            }
            else{
                cout<<(freq[0]/2)+1<<endl;
            }
        }
        else{
            if (freq[freq.size()-1]%2 == 0)
            {
                cout<<max(freq[freq.size()-1]/2,freq[freq.size()-2])<<endl;
            }
            else{
                cout<<max((freq[freq.size()-1]/2)+1,freq[freq.size()-2])<<endl;
            }
        }
        
        // for (int i = 0; i < n; ++i)
        // {
        //     cout<<v[i]<<" ";
        // }
        // cout<<endl;
        // for (int i = 0; i < freq.size(); ++i)
        // {
        //     cout<<freq[i]<<" ";
        // }
    }


    return 0;
}