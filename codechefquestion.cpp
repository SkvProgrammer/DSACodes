#include<iostream>
#include<vector>

using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){
   int n,b;
   cin>>n>>b;
   vector<int> a(n);

   for(int i = 0;i<n;i++){

    cin>>a[i];
   }
   bool found =  false;
   for(int mask = 0;mask <(1<<n);mask++){
    int and_val = -1;

    for(int i = 0;i < n;i++){

        if(mask & (1<<i)){
            if(and_val == -1){
                and_val = a[i];
            }
            else{
                and_val &= a[i];
            }
        }
    }

if(and_val == b){
    found = true;
    break;
}


   }

   if(found){
    cout<<"YES"<<endl;
   }
   else{
    cout<<"NO"<<endl;
   }



    }
    return 0;;
}