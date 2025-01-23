#include<bits/stdc++.h>
using namespace std;

int main()
{
    // STL string is like Vector of characters
    string str = "";

    // push_backI()
    str.push_back('A');
    str.push_back('B');
    str.push_back('C');
    str.push_back('D');
    str.push_back('E');


    // output
    cout << str << endl;

    // size() and length() works same same
    cout << "Size : " << str.size() << endl;
    cout << "Length : " << str.length() << endl;

    // concatanation
    str = str + 'F';

    // index access
    for(int i=0; i<str.size(); i++){
        cout << str[i] << " ";
    }
    cout << endl;

    // concatanation
    str += "G";

    // modify any index value
    str[1] = 'X';
    str[4] = 'Z';

    for(int i=0; i<str.size(); i++){
        cout << str[i] << " ";
    }
    cout << endl;    


    // show the last character of the string
    cout << "Using back() function : " << str.back() << endl;
    cout << "Using size() function : " << str[str.size()-1] << endl;
    cout << "Using length() function : " << str[str.length()-1] << endl;
    cout << "Using pointer end() function : " << *(str.end()-1) << endl;

    cout << endl;

    // show the first character of the string
    cout << "Using index access : " << str[0] << endl;
    cout << "Using pointer begin() function : " << *(str.begin()) << endl;

    cout << endl;

    // remove last element from string
    str.pop_back();
    cout << str << endl;
    str.pop_back();
    cout << str << endl;


    // iterating on string - for loop
    string str2 = "Nimur Rahman";
    for(int i=0; i<str2.size(); i++){
        cout << str2[i] ;
    }
    cout << endl;


    /// iterating on string - foreach loop
    for(char ch: str2){
        cout << ch ;
    }
    cout << endl;

    // iterating on string - foreach loop without checking the datatype
    for(auto ch: str2){
        cout << ch ;
    }cout << endl;


    // iterating on string - iterator
    string str3 = "Nimur Rahman Sharif";

    string::iterator itr;
    for(itr = str3.begin(); itr!=str3.end(); itr++){
        cout << *itr;
    }cout << endl;


    // iterating on string - auto iterator
    for(auto itr = str3.begin(); itr!=str3.end(); itr++){
        cout << *itr;
    }cout << endl;


    // String reverse - for loop
    for(int i=str3.size()-1; i>=0; i--){
        cout << str3[i] ;
    }
    cout << endl;


    // String reverse - iterator (rend(),rbegin())
    for(auto itr = str3.rbegin(); itr!=str3.rend(); itr++){
        cout << *itr ;
    }
    cout << endl;

    // String reverse - iterator (begin(),end(),)
    for(auto itr = --str3.end(); itr>=str3.begin(); itr--){
        cout << *itr ;
    }
    cout << endl;


    return 0;
}