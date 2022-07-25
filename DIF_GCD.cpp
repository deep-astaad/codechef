#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n,m;
        cin>>n>>m;
        long long a = n, b=m;
        b = b - (m-n)%n;
        cout<<a<<" "<<b<<endl;
    }

    return 0;
}