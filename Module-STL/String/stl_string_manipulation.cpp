#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str = "ABCDEFGHIJ";
    cout << str << endl;

    // String reverse
    reverse(str.begin(),str.end());
    cout << str << endl;

    str = "ABCDEFGHIJ";

    reverse(str.begin(),str.begin()+5);
    cout << str << endl;


    // String reverse - for loop
    str = "ABCDEFGHIJ";
    for(int i=0; i<str.size(); i++){
        cout << str[i] ;
    }
    cout << endl;

    // String reverse - for loop
    str = "ABCDEFGHIJ";    
    for(int i=str.size()-1; i>=0; i--){
        cout << str[i] ;
    }
    cout << endl;


    // String reverse - iterator (rend(),rbegin())
    str = "ABCDEFGHIJ";    
    for(auto itr = str.rbegin(); itr!=str.rend(); itr++){
        cout << *itr ;
    }
    cout << endl;

    // String reverse - iterator (begin(),end())
    str = "ABCDEFGHIJ";    
    for(auto itr = --str.end(); itr>=str.begin(); itr--){
        cout << *itr ;
    }
    cout << endl;


    // String - erase()
    str = "ABCDEFGHIJ";
    str.erase(str.begin()+3);

    cout << str << endl;


    // Mannual reverse
    str = "Hello World!!";
    string tmp;

    for(int i=str.size()-1; i>=0; i--){
        tmp += str[i];
    }
    cout << tmp << endl;



    return 0;
}