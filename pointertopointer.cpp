#include<bits/stdc++.h>

using namespace std;

int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);
   
   int a = 10;
   int *ptr = &a;
   int **atr = &ptr;

   //dereferencing the values of pointers

   cout<<*atr<<endl;//accesses ptr
   cout<<**atr<<endl;//access a




   return 0;
}