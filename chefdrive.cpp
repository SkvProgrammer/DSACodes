#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        if(x <= 70){
            cout<<"0"<<endl;
        }else if( x > 70 && x <= 100){
            cout<<"500"<<endl;
        }
        else if( x > 100){
            cout<<"2000"<<endl;
        }
    }
    return 0;
}