#include<bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output,,txt","w",stdout);
#endif

ll t;
cin>>t;
while(t--){
    ll n;
    cin>>n;
    ll a[2*n];
    for(ll i = 0;i < 2 * n;i++){
        cin>>a[i];
    }
    vector<ll> p,q;
    for(ll i = 0;i < n;i++){
        if(a[i] > n){
            p.push_back(i);
        }
    }
    for(ll i = n;i < 2 * n;i++){
        if(a[i] <= n){
            q.push_back(i);
        }
    }
    ll ans = 0;
    for(ll i = 0;i < p.size();i++){
        ans += (q[i] - p[i]);
    }


    cout<<ans<<"\n";
}







}