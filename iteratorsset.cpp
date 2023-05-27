#include<bits/stdc++.h>

using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
set<int> v = {2,3,4,6,7};
set<int>::iterator it = v.begin();
cout<<*it<<endl;//printing the first element

cout<<"Complete iteration:"<<endl;

for(auto itt = v.begin();itt != v.end();itt++){
    cout<<*itt<<endl;
}

    return 0;
}