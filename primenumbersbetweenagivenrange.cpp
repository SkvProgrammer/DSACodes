#include<bits/stdc++.h>

using namespace std;

int main(){
    int n1,n2;
    cin>>n1>>n2;

    for(int i = n1;i<=n2;i++){
        bool flag =0;



        for(int j = 2; j < i;j++){
         if(i%j == 0){
           flag = 1;
         }
            
        }

        if(flag == 0){
            cout<<i<<endl;
        }
    }
    return 0;
}