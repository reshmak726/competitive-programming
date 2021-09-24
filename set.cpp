// //  sets are uniwue number collection  in maps we have keys and values and if we remove values we are left with only keys and that keys are called as sets
// // in sets values are printed in sorted order only
// // in unordered time complex (tc) is O(1) they are not in order
// // in multiset tc is O log(n)


// // code to find unique strings from the given input we have to give the input from our own time complex O log(n)
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     set<string> s;
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         string str;
//         cin>>str;

//         s.insert(str);
//         cout<<endl;
//     }
//     for(auto value:s){
//         cout<<value<<endl;
//     }
//     return 0;
// }





// problem on sets

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        multiset<long long> bags;
        for(int i=0;i<n;i++){
            long long candy_count;
            cin>>candy_count;
            bags.insert(candy_count);
        }
        long long total_candies=0;
        for(int i=0;i<k;i++){
            auto last_it=(--bags.end());
            long long candy_count = *last_it;
            total_candies+=candy_count;
            bags.erase(last_it);
            bags.insert(candy_count/2);
        }
        cout<<total_candies<<endl;
    }
}