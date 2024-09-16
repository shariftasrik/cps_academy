#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while(tc-->0)
    {
        int n,x;
        cin >> n >> x;

        int total = 2*n;
        int rt = x;
        int urt = total - x;
        int rtt = x - urt;

        if(rtt <= 0){
            cout << 0 << endl;
        }else{
            cout << rtt << endl;
        }
    }
    return 0;
}



