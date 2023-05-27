#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int num = n;
        while(num--){
            int c;
            if(n%10 == 4){
                c+=1;
                n = n/10;
            }
            cout<<c<<endl;
        
        }
        
    }
    return 0;
}