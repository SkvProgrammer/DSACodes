#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
   int n;
   cin>>n;
   vector<ll> v(n);
   ll h = 1e9 + 1;
   ll l = 1e9 - 1;
   for(int i = 0;i < n;i++){
      cin>>v[i];
      if(v[i] >= 0 && v[i] < h){
         h = v[i];
      }
      if(v[i] < 0 && v[i] > l){
         l = v[i];
      }
   }
   ll ans = min(h,abs(l));
   cout<<ans-1<<"\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    ll h = 1e9 + 1;
    ll l = 1e9 - 1;
    while(t--){
    solve();
    } 
    
         return 0;
}
