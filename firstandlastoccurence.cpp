#include<bits/stdc++.h>
#include<climits>
using namespace std;

int firstoccurence(int array[],int n,int i,int key){
  if(i == n){
    return -1;
  }
  if(array[i] == key){
    return i;
  }


  return firstoccurence(array,n,i+1,key);


}

int lastoccurence(int arr[],int n,int i,int key){
if(i == n){
    return -1;
}
 int restArray = lastoccurence(arr,n,i+1,key);
 if(restArray != -1){
    return restArray;
 }
 if(arr[i] == key){
    return i;
 }
 return -1;




}




 int main(){
    cin.tie(0);
    ios::sync_with_stdio(0);
    int arr[5] = {4,2,2,5,1};
    //calling the function
    cout<<firstoccurence(arr,5,0,2)<<endl;
    cout<<lastoccurence(arr,5,0,2);
    return 0;
 }