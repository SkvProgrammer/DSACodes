#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin>>array[i];
    }


    //searching in the array
    int key;
    cin>>key;
    for (int i = 0; i < n; i++)
    {
        if(array[i] == key){
            cout<<"Search successful";
            break;
        }
    }
    
    
    return 0;
}