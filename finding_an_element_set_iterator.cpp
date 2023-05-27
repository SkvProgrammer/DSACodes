#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);

set<int> v = {2,3,78,10};

auto it = v.find(78);

if(it == v.end()){
    cout<<"Element not found"<<endl;
}else{
    cout<<&it<<endl;
}

    return 0;
}