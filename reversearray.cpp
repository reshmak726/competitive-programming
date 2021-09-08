#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>> str;
    string str_rev;
    for(int i = str.size()-1;i>=0;--i){
        // str_rev = str_rev + str[i]; we should not use this to reverse the string because adding a character to a string is not a good practice
        str_rev.push_back(str[i]); //always use this
    }
    cout<<str_rev;
    return 0;
}