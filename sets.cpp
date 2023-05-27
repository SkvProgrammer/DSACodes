#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
set<int> s;//set data strcture is ordered whereas the
//uordered set is not ordered 
//set is based on balanced binary tree 
//unordeered set is based on hashing
s.insert(4);
s.insert(5);
s.insert(3);
s.insert(3);
for(auto i:s){
    cout<<i<<endl;
}
//counting the number of elements in the set
cout<<s.count(3)<<endl;
    return 0;
}