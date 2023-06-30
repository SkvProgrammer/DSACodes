#include<bits/stdc++.h>

using namespace std;

//time complexity of this code is O(n)


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int array[5] = {8,3,9,7,1};

    int x = 1;

    for(int i = 0;i<5;i++){
        if(array[i] == x){
            cout<<"Element found at index "<<i<<endl;
        }
    }


    return 0;
}