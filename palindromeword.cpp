#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    char arr[n+1];
    cin>>arr;
    int i = 0;
    bool check = 1;
    while(arr[i] != '\0'){
        if(arr[i] != arr[n-1-i]){
            check = 0;
            break;

        }
        i++;
    }

    if(check == 0){
        cout<<"Not a palindrome"<<endl;
    }else{
        cout<<"Palindrome"<<endl;
    }



    return 0;
}