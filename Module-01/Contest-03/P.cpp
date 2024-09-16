#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int x,y,z;
    cin >> x >> y >> z;

    int tm = x*y;
    int zt = z*24*60;

    if(zt >= tm){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
}
int main()
{
    int tc;
    cin >> tc;

    while(tc-->0)
    {
        solve();
    }
    return 0;
}

