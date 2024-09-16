#include <iostream>
using namespace std;

int main() {
    int tc;
    cin >> tc;

    while (tc-->0) {
        long long n, k;
        cin >> n >> k;

        int sum = 0;


        if(n<k || (n%2 == 1 && k%2 == 0)){
            cout << "NO" << endl;
            continue;
        }else if(k == 1){
            cout << "YES" << endl;
            cout << n << endl;
            continue;
        }

        int a = -1;
        int b = -1;

        for(int i=1; i<n; i++)
        {
            if((n-i)%(k-1) == 0 && ((n-i)/(k-1))%2== i%2){
                a = i;
                b = (n-i)/(k-1);
                break;
            }
        }
        if(a == -1){
            cout << "NO" << endl;
        }else{
            cout << "YES" << endl;
            for(int i=1; i<k; i++)
            {
                cout << b << " ";
            }
            cout << a << endl;
        }
    }



    return 0;
}
