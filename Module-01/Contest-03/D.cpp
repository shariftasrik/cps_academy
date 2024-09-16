#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    vector<int> v;

    for(int i=0; i<10000; i++)
    {
        if(i%3 == 0)
        {
            continue;
        }
        else if(i%10 == 3)
        {
            continue;
        }
        else
        {
            v.push_back(i);
        }
    }

    while(tc-->0)
    {
        int k;
        cin >> k;
        cout << v[k-1] << endl;
    }
    return 0;
}




