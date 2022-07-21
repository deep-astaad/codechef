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
        string s;
        cin >> s;
        int count_one = 0;
        int count_zero = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '0')
            {
                count_zero++;
            }
            else
            {
                count_one++;
            }
        }
        string str = "";
        if (count_zero <= n / 2)
        {
            while (count_one--)
            {
                str += "1";
            }
        }
        else
        {
            while (count_zero--)
            {
                str += "0";
            }
        }
        cout << str << endl;
    }

    return 0;
}