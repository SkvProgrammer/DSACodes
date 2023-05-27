#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    ll t;
    cin>>t;

    while(t--){
        ll n;
        cin>>n;
        ll last_digit = n%10;

        while(n >= 10){
            n = n / 10;
        }

        ll first_digit = n;
        ll sum = first_digit + last_digit;
        cout<<sum; 
        
        
    }
    return 0;
}