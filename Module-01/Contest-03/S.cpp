#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while(tc-->0)
    {
        int n;
        cin >> n;

        int temp;
        vector<int> v;
        int mul = 1;

        while(n)
        {
            temp =  n%10;
            if(temp != 0)
            {
                v.push_back(temp*mul);
            }
            n = n/10;
            mul = mul*10;
        }
        cout << v.size() << endl;

        for(int i=0; i<v.size(); i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }
    return 0;
}


