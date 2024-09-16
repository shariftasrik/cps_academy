#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while(tc-->0)
    {
        int a1,a2,a3,b1,b2,b3;
        cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3;

        vector<int> a;
        vector<int> b;

        a.push_back(a1);
        a.push_back(a2);
        a.push_back(a3);

        b.push_back(b1);
        b.push_back(b2);
        b.push_back(b3);

        sort(a.begin(), a.end());
        reverse(a.begin(),a.end());

        sort(b.begin(), b.end());
        reverse(b.begin(),b.end());


        int aa = a[0]*100 + a[1]*10 + a[2];
        int bb = b[0]*100 + b[1]*10 + b[2];

        if(aa > bb){
            cout << "Alice" << endl;
        }else if(aa == bb){
            cout << "Tie" << endl;
        }else{
            cout << "Bob" << endl;
        }
    }
    return 0;
 }



