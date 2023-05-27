#include<bits/stdc++.h>

using namespace std;


int selectionSort(int array[],int n){
      for(int i = 0 ;i<n-1;i++){
    for(int j=i+1;j<n;j++){
        if(array[j]<array[i]){
        int temp = array[j];
        array[j] =  array[i];
        array[i] = temp;
        }
    }
  }



 cout<<"Sorted array"<<endl;
  for(int x=0;x<n;x++){
    cout<<array[x]<<" ";
  }

  return 0;

}

int main(){
    int n;
    cin>>n;
    int array[n];

    for(int i =0;i<n;i++){
        cin>>array[i];
    }



  selectionSort(array,n);
    
    return 0;
}