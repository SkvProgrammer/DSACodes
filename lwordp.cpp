#include<bits/stdc++.h>
#include<climits>
using namespace std;

int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);

   int n;
   cin>>n;
   cin.ignore();
   char arr[n+1];
   cin.getline(arr,n);

   cin.ignore();
   int i = 0;
   int count = 0;
   int mx = 0;
   while(arr[i] != '\0'){
    if(arr[i] == ' ' || arr[i] == '\0'){
        if(count > mx){
            mx = count;
        }
        count = 0;
    }else
    count+=1;

    

    i+=1;
   }

   cout<<"The largest word in the given sentence is:"<<mx<<endl;


    return 0;
}