#include<bits/stdc++.h>

using namespace std;


void Frequency(vector<int> vec)
{
    
    
}



int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int x = 0;
        for(int i = 0;i < n;i++){
            int y;cin>>y;
            if(y == 0) x++;
        }
        if(x%2 == 0) cout<<"YES\n";
        else cout<<"NO\n";
        
    }
    return 0;
}