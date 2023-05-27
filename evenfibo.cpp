#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int t1 = 0;
        int t2 = 1;
        int t3;
        int sum;
        while(t3 < n){
            t3 = t1 + t2;
            t1=t2;
            t2=t3;

            if(t3 < n){
            if(t3%2 == 0){
                sum+=t3;
            }
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}