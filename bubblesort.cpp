#include<bits/stdc++.h>
using namespace std;

int bubbleSort(int array[],int n){
    int counter=1;
    while(counter < n){
        for(int i=0;i<n-counter;i++){
            if(array[i] > array[i+1]){
                int temp = array[i];
                array[i] = array[i+1];
                array[i+1] = temp;
            }
        }

counter++;
    }


    //printing the elements of the array

    for(int x=0;x<n;x++){
        cout<<array[x]<<" ";
    }



    return 0;
}







int main(){
    int n;
    cin>>n;
    int array[n];
  for(int i=0;i<n;i++){
    cin>>array[i];
  }


   //calling the function

   bubbleSort(array,n);


    return 0;
}