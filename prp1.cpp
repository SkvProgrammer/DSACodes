#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie();
    int t;
    cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        vector<int> rows;
        vector<int> columns;
        for(int i = 0;i < m;i++){
            int a;
            cin>>a;
            rows.push_back(a);
        }
        for(int i = 0;i < n;i++){
            int a;
            cin>>a;
            columns.push_back(a);
        }
    }

    return 0;

}