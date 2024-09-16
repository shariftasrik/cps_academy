#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while(tc-->0)
    {
        char b[6];
        int count = 0;
        for(int i=0; i<6; i++)
        {
            cin >> b[i];
        }
        for(int i=0; i<6; i++)
        {
            if(b[i] == 'W' && b[i+1] == 'W' && b[i+2] == 'W')
            {
                count++;
            }

        }
        if(count >= 1){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}


