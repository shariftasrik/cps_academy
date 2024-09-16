#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while(tc-->0)
    {
        int x,y,z;
        cin >> x >> y >> z;

        int ts = x*y;

        int ps = ts/2;

        if(z > ps)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}


