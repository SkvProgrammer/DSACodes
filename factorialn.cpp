#include<bits/stdc++.h>

using namespace std;
int factorial(int n){

    if(n==0){
    return 1;
   }
   int fact = n * factorial(n-1);

 

   return fact;



}


int main(){
    int n;
    cin>>n;
 //calling the function

  cout<<factorial(n);


    return 0;
}