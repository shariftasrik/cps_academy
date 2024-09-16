#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while(tc-->0)
    {
        int r;
        cin >> r;

        if(r <= 1399) cout << "Division 4" << endl;
        if(r >= 1400 && r <= 1599) cout << "Division 3" << endl;
        if(r >= 1600 && r <= 1899) cout << "Division 2" << endl;
        if(r >= 1900) cout << "Division 1" << endl;
    }
    return 0;
}

