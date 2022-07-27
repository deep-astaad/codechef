#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        long long zero = 0, one = 0;
        for (long long i = 0; i < n; ++i)
        {
            if (s[i] == '0')
            {
                zero++;
            }
            else
            {
                one++;
            }
        }

        long long minimum = min(zero, one);
        int ans = 0;
        if (k == 1)
        {
            cout << max(zero, one) - min(zero, one) << endl;
        }
        else
        {
            zero -= minimum;
            one -= minimum;
            int temp = max(zero, one);
            if (temp != 0)
            {
                while (temp > k)
                {
                    temp -= k;
                    ans++;
                }
                ans++;
            }
            cout << ans << endl;
        }
        }

    return 0;
}