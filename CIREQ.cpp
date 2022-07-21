#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        while (true)
        {
            vector<int> vec;
            int j=0;
            for (int i = 0; i < v.size(); i++)
            {
                if (v[j] >= i + 1 && vec.back() != i + 1)
                {
                    vec.push_back(v[j]);
                    v.erase(v.begin() + i);
                    i--;
                    j++;
                }
            }
        }
    }

    return 0;
}

// int count = 1;
//         int j = 0;
//         for (int i = 0; i < n; i++)
//         {
//             if (i + 1 > v[j])
//             {
//                 count++;
//                 n = n - i;
//                 i = -1;
//                 j--;
//             }
//             j++;
//         }
//         cout << count << endl;