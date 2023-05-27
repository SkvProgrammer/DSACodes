#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t!=0){
        int n;
        cin>>n;
        int sum;
        while(n!=0){
            int rem = n%10;
            sum+=rem;
            n=n/10;
            continue;
        }
        cout<<sum;
        t--;
    }
    return 0;
}