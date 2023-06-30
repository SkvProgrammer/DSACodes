#include<bits/stdc++.h>
#define long long ll
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    //implementing binary search(array must be sorted)

     int arr[10] = {1,2,3,4,5,6,7,8,9,10};

     int a = 0;
     int b = 9;
     int x = 3;

     while(a <= b){
       int k = (a+b)/2;
        if(arr[k] == x){
           cout<<"Element found at"<<k<<endl;
        }
        else if(arr[k] > x){
            b = k - 1;
        }
        else{
            a = k + 1;
        }
     }



    return 0;
}