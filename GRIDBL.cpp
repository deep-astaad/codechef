#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int count = 0;
        count = (n * m) - (((n / 2) * (m / 2)) * 4);
        cout << count << endl;
    }

    return 0;
}