#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    set<int> s;
    //s.insert(5);
    s.insert(10);
    s.insert(12);

    cout<<s.count(5)<<endl;
    for(auto i:s){
        cout<<i<<endl;
    }


    return 0;
}