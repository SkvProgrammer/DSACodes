#include<bits/stdc++.h>
#include<cmath>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arm = 0;
  
    int on = n;
    while(n!=0){
        int rem = n % 10;
        arm+=pow(rem,3);
        n = n/10;
    }

    if(arm == on){
        cout<<"Armstrong number"<<endl;
    }
    return 0;
}