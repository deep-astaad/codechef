#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, x, y;
        cin >> n >> k >> x >> y;
        int amount = 0;
        if (x <= y)
        {
            amount = n*x;
        }
        else{
            amount = k*x + (n-k)*y;
        }
        cout<<amount<<endl;
        
    }

    return 0;
}