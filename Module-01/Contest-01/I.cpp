#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;

    long long res=1;

    for(int i=1; i<=b; i++)
    {
        res *= a;
    }

    cout << res << endl;
    return 0;
}






