#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x;
    cin >> n >> x;

    int arr[n],sum  = 0;
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    for(int i=0; i<n; i++)
    {
        if(arr[i] <= x)
        {
            sum += arr[i];
        }
    }
    cout << sum << endl;



    return 0;
}







