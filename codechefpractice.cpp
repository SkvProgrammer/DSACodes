#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while (t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int e1 = a + b + c;
        int e2 = a - b + c;
        int e3 = a + b - c;
        int e4 = - a + b + c;
        int e5 = - a - b - c;
        int e6 = -a - b + c;
        int e7 = a - b - c;
        int e8 = - a + b -c;
        long long arr[] = [e1,e2,e3,e4,e5,e6,e7,e8];
        for(int i = 0;i < arr.size();i++){
            if(arr[i] == 0){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        } 
    }
    
    return 0;
}