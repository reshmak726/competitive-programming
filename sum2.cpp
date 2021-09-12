#include<bits/stdc++.h>
using namespace std;
const int N=1e7+10;
long long int arr[N];

int main(){
    int n,m;
    cin>>n>>m;
    while(m--){
        int a,b,d;
        cin>>a>>b>>d;
        arr[a]+=d;
        arr[b+1]-=d;
    }
    for(int i=1;i<=n;i++){
        arr[i]+=arr[i-1];
    }

    long long mx = -1;
    for(int i=1;i<=n;i++){
        if(mx<arr[i]){
            mx=arr[i];
        }
    }
    cout<<mx<<endl;


}
// 1   2    3   4    5  index num
// 0   0    0   0    0
//100  100
//     100 100 100 100
//         100 100
// final value
//100  200 200 200  100


// 5 3  5 is size of array 3 is query 
// 1 2 100  from index 1 to 2 add 100
// 2 5 100    from index 2 to 5 add 100
// 3 4 100    from index 3 to 4 add 100
// 200      return max value 