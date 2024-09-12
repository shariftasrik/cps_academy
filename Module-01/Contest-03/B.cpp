#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while(tc-->0){
        int a,b;
        cin >> a >> b;

        int ans  = a - b ;

        if(ans < 0){
            cout << "0" << endl;
        }else{
            cout << ans << endl;
        }


    }
    return 0;
}

