#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;

    cin >> tc;

    while(tc-->0)
    {
        double n,x,d;
        cin >> n >> x >> d;

        double res = floor(n/(x*5))+d;
        cout << res << endl;
    }

    return 0;
 }



