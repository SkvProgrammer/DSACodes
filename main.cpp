#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,sum=0;
        cin>>n;
        for(int i=1;i<n;i++){
            if(i%3 == 0){
                sum+=i;
            }
            else if(i%5 == 0){
                sum+=i;
            }
        }
        
        cout<<sum<<"\n"<<endl;
    }
    return 0;
}