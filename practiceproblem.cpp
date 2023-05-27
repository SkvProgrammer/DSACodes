#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        vector<int> v;
        int n,count;
        cin>>n;
        for(int i = 0;i < n;i++){
            int elem;
            cin>>elem;
            v.push_back(elem);
        }
        for(int j:v){
            if(j >= 1000){
                count+=1;
            }
            cout<<j<<" ";
        }
        //cout<<count<<endl;

    }
    return 0;
}