#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;

    int d,r;
    double f;

    d = a/b;
    r = a%b;
    f = (1.0*a)/b;

    cout << d << " " << r << " " << fixed << setprecision(5) << f << endl;
    return 0;
}


