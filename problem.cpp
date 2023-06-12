#include<bits/stdc++.h>

using namespace std;



int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin>>t;
  while(t--){
    int alice;
    int bob;
    cin>>alice>>bob;

    if((alice - 1) == (bob + 1)){
        cout<<"YES"<<endl;
    }else if((bob - 1) == (alice + 3)){
        cout<<"YES"<<endl;
    }
    else if(alice == bob){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    
    
    
    
    
    
    
    }

  return 0;
}