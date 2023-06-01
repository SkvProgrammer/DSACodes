#include<bits/stdc++.h>

using namespace std;

int main(){
    //write a program to check if the given number is a power of 2
    //write a program to generate all the possible subsets of a set {a,b,c}
   

   //using bit manipulation

   int n;
   cin>>n;

   if( n >n 0 ){
        int i = n & (n-1);

        if(i == 0){
            cout<<"Power of 2"<<endl;
        }else{
            cout<<"Not the power of 2"<<endl;
        }
   }

 
}