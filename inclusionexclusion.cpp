#include<bits/stdc++.h>

using namespace std;

int divisible(int n,int a,int b){
   int c1 = n/a;
   int c2 = n/b;

   int c3 = n/(a*b);

   return c1+c2-c3;

}



int main(){
  cout<<divisible(40,5,7);



    return 0;
}