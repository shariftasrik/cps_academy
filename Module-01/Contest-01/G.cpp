#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x,y,z;
    cin >> n;

    int temp = n;
    z = temp%10;
    temp /= 10;

    y = temp%10;
    temp /= 10;

    x = temp%10;
    temp /= 10;

    int sum1= 0, sum2 = 0, sum3 = 0, sumT = 0;
    sum1 = ((100*x)+(10*y)+z);
    sum2 = ((100*y)+(10*z)+x);
    sum3 = ((100*z)+(10*x)+y);

    sumT = sum1 + sum2 + sum3;

    cout << sumT << endl;
    return 0;
}




