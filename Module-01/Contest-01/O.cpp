#include<bits/stdc++.h>
using namespace std;

int main()
{
    int X;
    cin >> X;

    vector<int> v;
    int cnt=0;
    for(int i=0; i<32; i++)
    {
        if(X!=0)
        {
            int temp = X%2;
            X = X/2;

            v.push_back(temp);
        }
    }
    for(int i=0; i<v.size(); i++)
    {
        if(v[i]==0)
        {
            cnt++;
        }
        else
        {
            break;
        }
    }

    cout << cnt << endl;
    return 0;
}





