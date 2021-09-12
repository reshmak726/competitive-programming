// #include<bits/stdc++.h>
// using namespace std;
// const int N = 1e5+10;

// int a[N];
// int pf[N];
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         cin>>a[i];
//         pf[i] = pf[i-1]+a[i];
//     }
//     int q;
//     cin>>q;
//     while(q--){
//         int l,r;
//         cin>>l>>r;
//         // long long sum=0;
//         // for(int i=l;i<=r;i++){  // O(N)+O(Q*N)==10 raise   to 10 time complexity it is not a good practice
//         //     sum+=a[i];
//         // }
//         cout<< pf[r]-pf[l-1] << endl;
//     }

// }

// 2D array sum finding the area of rectangle
#include<bits/stdc++.h> 
using namespace std;
const int N = 1e3+10;
int arr[N] [N];
long long pf[N][N];
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin >>arr[i] [j];
            pf[i][j]=arr[i][j]+pf[i-1][j]+pf[i][j-1]-pf[i-1][j-1];
        }
    }
    int q;
    cin>>q;
    while(q--){
        int a,b,c,d;
        cin>>a >> b>> c>> d;
        cout<<pf[c][d] - pf[a-1][d] - pf[c][b-1]+pf[a-1][b-1];
        // long long sum = 0;
        //due to time complexity issue we will remove this
        // for(int i=a;i<=c;i++){
        //     for(int j=b;j<=d;j++){
        //       sum+=  arr[i][j];
        //     }
        // }
        // cout<<sum;
    }

}
