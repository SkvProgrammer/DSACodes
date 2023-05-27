#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int x;
        vector<int> a;
        while(n--){
            cin>>x;
            a.push_back(x);
        }
        for(int i:a){
            cout<<i<<endl;
        }
    }
    return 0;
}