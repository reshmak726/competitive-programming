#include<bits/stdc++.h>
using namespace std;
int main(){
    // int t;
    // cin>>t;
    // while(t--){ used when we have to do multiple test cases
        int n;
        cin>>n;
        int sum = 0;
        while(n>0){
           int lastdigit = n%10;
           sum = sum+lastdigit;
           n = n/10;

        }
        cout<<sum << endl;
    }
// }