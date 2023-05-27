#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    bool flag = 0;
    //prime number check
    for(int i = 2;i < n;i++){
        if(n%i == 0){
            cout<<"Non-prime"<<endl;
            flag = 1;
            break;
        }
    }
    
    if(flag == 0){
        cout<<"prime"<<endl;
    }

    
    return 0;
}