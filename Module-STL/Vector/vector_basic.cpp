#include<bits/stdc++.h>
using namespace std;

int main()
{
    // STL vector
    vector<int>val = {1,2,3,4};

    // push_backI()
    val.push_back(5);
    val.push_back(6);
    val.push_back(7);
    val.push_back(8);
    val.push_back(9);


    // output

    // size() and length() works same same
    cout << "Size : " << val.size() << endl;


    // index access
    for(int i=0; i<val.size(); i++){
        cout << val[i] << " ";
    }
    cout << endl;

    // modify any index value
    val[1] = 22;
    val[4] = 55;

    for(int i=0; i<val.size(); i++){
        cout <<val[i] << " ";
    }
    cout << endl;    


    // show the last character of the vector
    cout << "Using back() function : " << val.back() << endl;
    cout << "Using size() function : " << val[val.size()-1] << endl;
    cout << "Using pointer end() function : " << *(val.end()-1) << endl;

    cout << endl;

    // show the first character of the vector
    cout << "Using index access : " << val[0] << endl;
    cout << "Using pointer begin() function : " << *(val.begin()) << endl;

    cout << endl;

    // remove last element from vector
    val.pop_back();
    val.pop_back();

    for(int i=0; i<val.size(); i++){
        cout << val[i] << " ";
    }
    cout << endl;



    // iterating on vector - for loop
    for(int i=0; i<val.size(); i++){
        cout << val[i] << " ";
    }
    cout << endl;


    /// iterating on vector - foreach loop
    for(int x: val){
        cout << x << " ";
    }
    cout << endl;

    // iterating on vector - foreach loop without checking the datatype
    for(auto x: val){
        cout << x << " ";
    }cout << endl;


    // iterating on vector - iterator
    vector<int>::iterator itr;
    for(itr = val.begin(); itr!=val.end(); itr++){
        cout << *itr << " ";
    }cout << endl;


    // iterating on vector - auto iterator
    for(auto itr = val.begin(); itr!=val.end(); itr++){
        cout << *itr << " ";
    }cout << endl;


    // vector reverse - for loop
    for(int i=val.size()-1; i>=0; i--){
        cout << val[i] << " ";
    }
    cout << endl;


    // vector reverse - iterator (rend(),rbegin())
    for(auto itr = val.rbegin(); itr!=val.rend(); itr++){
        cout << *itr << " ";
    }
    cout << endl;

    // vector reverse - iterator (begin(),end(),)
    for(auto itr = --val.end(); itr>=val.begin(); itr--){
        cout << *itr << " ";
    }
    cout << endl;


    return 0;
}