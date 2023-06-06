#include<bits/stdc++.h>

using namespace std;


int sum(int n){
    if(n==0){
        return 0;
    }
    int s = n + sum(n-1);

    return s;
}




int main(){
   int n;
   cin>>n;
 //calling the function 


   cout<<sum(n);
   


    return 0;
}