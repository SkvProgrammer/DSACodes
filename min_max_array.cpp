#include<bits/stdc++.h>

using namespace std;

int main(){
    int array[5] = {4,23,21,2,1};


    int max = INT_MIN;
    int min = INT_MAX;

    for(int i = 0; i < 5;i++){
        if(array[i] < min){
            min = array[i];
        }
        if(array[i] > max){
            max = array[i];
        }
    }




    cout<<max<<" "<<min<<endl;
    return 0;
}