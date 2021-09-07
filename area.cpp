// area of rectangle
#include<bits/stdc++.h>
using namespace std;
int main(){
    // int l,b; //declaring int as data type we will only pass one test case but what about the rest of test cases therefore always check the constraints first and then accordingly declare the data types ..for eg if we want to store l=100000 and b = 100000 then ans should be 10000000000 but in int the range is only 10 to power 9 and in long int 10 to power 12 and long long int 10 to power 18 so declare accordingly
    long long int l,b;
    cin>> l >> b;
    cout<< l*b <<endl;
    return 0;
}
