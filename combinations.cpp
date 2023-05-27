#include<bits/stdc++.h>

using namespace std;

int fact(int n){
    int fact = 1;
    for(int i = 2; i <= n;i++){
        fact = fact * i;
    }

    return fact;
}

int main(){
    int n,r;
    cin>>n>>r;
    //solution of nCr
    int solution = fact(n) / fact(n-r) * fact(r);

    cout<<solution<<endl;

    return 0;
}