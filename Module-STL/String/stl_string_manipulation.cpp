#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str = "Nimurr Rahman Sharif";

    // String reverse - for loop
    for(int i=0; i<str.size(); i++){
        cout << str[i] ;
    }
    cout << endl;

    // String reverse - for loop
    for(int i=str.size()-1; i>=0; i--){
        cout << str[i] ;
    }
    cout << endl;


    // String reverse - iterator (rend(),rbegin())
    for(auto itr = str.rbegin(); itr!=str.rend(); itr++){
        cout << *itr ;
    }
    cout << endl;

    // String reverse - iterator (begin(),end(),)
    for(auto itr = --str.end(); itr>=str.begin(); itr--){
        cout << *itr ;
    }
    cout << endl;


    return 0;
}