#include<bits/stdc++.h>
using namespace std;
const int N = 1e7+10;
int hsh[N];
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        hsh[a[i]]++;  //in order to maintain the time complexity as O(1)
    }
    int q;
    cin>>q;
    while(q--){
        int x;
        cin>>x;
        int count=0;
       
        cout<< hsh[x] <<endl;
    }
    return 0  ;
}