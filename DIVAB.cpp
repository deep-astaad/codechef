#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a,b,n, flag = 0;
        cin>>a>>b>>n;
        unordered_set<int> s;
        if (n % a != 0)
        {
            n += a - n%a;
        }
        while(s.find(n%b) == s.end()){
            s.insert(n%b);
            if (n%a == 0 && n%b != 0)
            {
                flag =1;
                cout<<n<<endl;
                break;
            }
            else{

                n+=a;
            }
        }
        if (flag == 0)
        {
            cout<<-1<<endl;
        }
        
    }

    return 0;
}