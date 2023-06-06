#include<bits/stdc++.h>

using namespace std;

bool boolrecursort(int array[],int n){

    if(n==1){
        return true;
    }
    bool restArray = boolrecursort(array+1,n-1);
    return (array[0] < array[1] && restArray);
  
}



int main(){
    int n;
    cin>>n;

    int array[n];

    for(int i = 0;i<n;i++){

        cin>>array[i];
    }


    cout<<boolrecursort(array,n);

    return 0;
}