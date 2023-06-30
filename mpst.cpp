#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    map<string,int> m;

    m["Satyam"] = 1;
    m["Veronica"] = 2;

    for(auto x:m){
        cout<<x.first<<" "<<x.second<<endl;
    }




    return 0;
}