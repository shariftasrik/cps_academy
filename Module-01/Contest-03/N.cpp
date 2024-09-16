#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while(tc-->0)
    {
        int x,n;
        cin >> x >> n;

        int rem = (n+99)/100;
        int req = rem - x;
        if(req <= 0){
            cout << 0 << endl;
        }else{
            cout << req << endl;
        }
    }
    return 0;
}


