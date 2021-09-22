#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v={2,3,5,6,7};
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    vector<int> ::iterator it=v.begin();
    for(it=v.begin();it!=v.end();it++){
        cout<<(*it);
    }
    cout<<endl;
    // another way to print iterators
    for(int value : v){
        cout<<value<<" ";
    }
    cout<<endl;
    auto a=1;
    cout<<a<<endl;

    // vector<pair<int,int>> v_p={{1,2},{2,3},{3,4}};
    // vector<pair<int,int>> ::iterator it;
    // for(it = v_p.begin();it!=v_p.end();it++){
    //     // cout<<(*it).first<<" "<<(*it).second<<endl;
    //     cout<<(it->first)<<" "<<(it->second)<<endl;
    // }

    // cout<<(*it);
    return 0;
}


// in vectors items are continuos location
// in maps and sets they are not in continous location

// auto operator is used to give the datatype of the vector