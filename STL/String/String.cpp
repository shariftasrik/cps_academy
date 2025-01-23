#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    for(int i=0; i<s.size(); i++){
        for(int j=i+1; j<s.size(); j++){
            if(s[i]==s[j]){
                s[j]='a';
            }
        }
    }

    for(int i=0; i<s.size(); i++){
        cout << s[i] << " ";
    }
    cout << endl;

    return 0;
}