#include<bits/stdc++.h>
using namespace std;

int main()
{
    int X;
    cin >> X;

    int a,b,temp1,temp2;
    temp1 = X%10;
    a = temp1;
    X = X/10;

    temp2 = X%10;
    b = temp2;

    cout << "K" << b << a << endl;
    return 0;
}
