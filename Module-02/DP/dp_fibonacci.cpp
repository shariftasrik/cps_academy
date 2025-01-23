#include<bits/stdc++.h>
using namespace std;

int dp[100005];
int mark[100005];

int fibo(int n){
    if(n<=1) return n;

    if(mark[n] == 1) return dp[n];

    int result = fibo(n-1)+fibo(n-2);
    
    dp[n] = result;
    mark[n] = 1;


    return result;
}

int main()
{
    int n;
    cin >> n;

    cout << fibo(n) << endl;

    return 0;

}