#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while(tc-->0)
    {
        int a1,a2,b1,b2;
        cin >> a1 >> a2 >> b1 >> b2;

        int res1=0,res2=0,ans=0;
        res1 = a1-a2;
        res2 = b1-b2;
        ans = res1+res2;

        if(ans < 0){
            cout << "YES" << endl;
        }else if(ans == 0){
            cout << "NO" << endl;
        }else{
            cout << "NO" << endl;
        }
    }

    return 0;
 }

