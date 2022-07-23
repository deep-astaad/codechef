#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, n, r;
        cin >> x >> y >> n >> r;
        int max = n*y;
        if (x * n > r)
        {
            cout << -1 << endl;
        }
        else if (x * n == r)
        {
            cout << n << " " << 0 << endl;
        }
        else if (y * n <= r)
        {
            cout << 0 << " " << n << endl;
        }
        else
        {
            int d = max - r;
            if (d % (y-x) == 0)
            {
                cout<<d/(y-x)<<" "<< n -d/(y-x)<<endl;
            }
            else{
                cout<<d/(y-x)+1<<" "<< n -d/(y-x) -1<<endl;
            }
        }
    }

    return 0;
}