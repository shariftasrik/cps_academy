#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while(tc-->0)
    {
        int x,y;
        cin >> x >> y;

        int res = floor(x/y);

        if(res > 20)
        {
            cout << 20 << endl;
        }
        else{
            cout << res << endl;
        }

    }

    return 0;
 }
