#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while(tc-->0)
    {
        double x;
        cin >> x;

        double res,ans;
        res = (x*20)/100;
        ans = ceil(100/res);

        cout << ans << endl;

    }

    return 0;
 }



