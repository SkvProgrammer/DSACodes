#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
       if((a == 0 && b == 0) || (b == 0 && c == 0) || ( c == 0 && a == 0)){
        cout<<"NO"<<endl;
       }
       else if((a < 0 && b < 0 && c > 0) || (a > 0 && b < 0 && c < 0) || (a < 0 && b > 0 && c < 0)){
        cout<<"YES"<<endl;
       } 
       else if((a >  0 && b > 0 && c < 0) || (a < 0 && b > 0 && c > 0) || (a >  0 && b < 0 && c > 0)){
       	cout<<"YES"<<endl;
       }
       else if(a == 0 || b == 0 || c == 0){
        if((a < 0 && b < 0) || ( b < 0 && c < 0) || ( c < 0 && a < 0)){
               cout<<"NO"<<endl;
                }
        else if((a < 0 || b < 0) || ( b < 0 || c < 0) || ( c < 0 || a < 0)){
            cout<<"YES"<<endl;
        } 
        else{
            cout<<"NO"<<endl;
        }
       }
       
       else{
        cout<<"NO"<<endl;
       }

       
       
    }
    return 0;
}