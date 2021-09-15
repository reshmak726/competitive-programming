#include<bits/stdc++.h>
using namespace std;


// normal sum problem

// int sum(int n,int a[]){
//     if(n<0) return 0;
//     return sum(n-1,a)+a[n];
// }
// int main(){
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     cout<<sum(n-1,a);
//     // return 0;
// } 


int digitsum(int n){
    if(n==0) return 0;
    return digitsum(n/10)+n%10;
}
int main(){
    int n;
    cin>>n;
    int a[n];
  
    cout<<digitsum(n);
    // return 0;
} 