#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,m;
    cin >> n >> k >> m;

    int arr[n];
    for(int i=0; i<n-1; i++)
    {
        cin >> arr[i];
    }

    int sum = 0, res;

    for(int i=0; i<n-1; i++)
    {
        sum += arr[i];
    }

    res = (n*m) - sum;

    if(res > k){
        cout << -1 << endl;
    }else if(res <= 0){
        cout << 0 << endl;
    }else{
        cout << res << endl;
    }

    return 0;
}



