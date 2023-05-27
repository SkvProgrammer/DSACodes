#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int size;
        cin>>size;
        vector<long long int> arr;
        for(int i = 0; i < 2*size;i++){
            int s;
            cin>>s;
            arr.push_back(s);
        }
        sort(arr.begin(),arr.end());
        long long int x = 1e9;
        for(int i = 0; i <= size;i++){
            x = min(x,arr[size+i-1] - arr[i]);
        }
        cout<<x<<"\n";
        }
    
    return 0;
}