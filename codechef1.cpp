#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t,n,rem,sum = 0;
    cin>>t;
    while(t > 0){
    cin>>n;
    int size = sizeof(n)/sizeof(int);
    for(long long i = 0;i <= size;i++){
        rem = n%10;
        sum+=rem;
        n = n / 10; 
        
    }
    cout<<sum;

    }
    return 0;
}