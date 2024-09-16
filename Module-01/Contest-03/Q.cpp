#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while(tc-->0)
    {
        double n,k;
        cin >> n >> k;

        double ppm,hb,bpm,rbpm,pb,exp;

        ppm = n/(k+1);
            //cout << ppm << endl;
        hb     = (n-ppm);
            //cout << hb << endl;
        bpm  = hb/k;
            //cout << bpm << endl;
        rbpm = floor(bpm);
            //cout << rbpm << endl;
        pb = rbpm*k;
            //cout << pb << endl;
        exp = n - pb;
            //cout << exp << endl;


        cout << exp << endl;
     }


 }
