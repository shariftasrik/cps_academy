#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k,cg,cm;
    cin >> k >> cg >> cm;

    int g=0,m=0;
    while(k-->0)
    {
        if(g == cg){
            g = 0;
        }else if(m == 0){
            m = cm;;
        }else{
            int tns = min(cg-g,m);
            g = g + tns;
            m = m - tns;

        }
    }
    cout << g << " " << m << endl;

    return 0;
}



