#include<bits/stdc++.h>

using namespace std;

int binarySearch(int array[],int n,int key){
    int s=0;
    int e=n;

    while(s<=e){
        int mid=(s+e)/2;

        if(array[mid] == key){
            return mid;
        }else if(array[mid] > key){
            e = mid-1;
        }else{
            s=mid+1;
        }

return -1;

    }
}

int main(){
    


    return 0;
}