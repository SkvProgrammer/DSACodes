#include<bits/stdc++.h>

using namespace std;

 int main(){
    int n;
    cin>>n;
    int rem,rev = 0;
    
    while(n!=0){rem = n % 10;
    rev = rev * 10 + rem;
    n = n/10;
 }
    

    cout<<"The reversed number is:"<<rev;



    return 0;
 }