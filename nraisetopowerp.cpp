#include<bits/stdc++.h>

using namespace std;

int power(int n,int p){

    if(p == 0){
        return 1;
    }
    int v = n * power(n,p-1);
    return v;
} 



int main(){
     int n,p;
     cin>>n>>p;

 //calling the function

   cout<<power(n,p);

    return 0;
}