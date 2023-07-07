#include<bits/stdc++.h>

using namespace std;
vector<vector<int>> ans;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(0);
int N;cin>>N;
    vector<int> a(N);

    for(auto &i:a){
        cin>>i;
    }

    sort(a.begin(),a.end());
    
    do{
     ans.push_back(a);
     
    }while(next_permutation(a.begin(),a.end()));

  for(auto v : ans){
    for(auto i : v){
        cout<<i<<" ";
    }
    cout<<"\n";
  }
    return 0;
}