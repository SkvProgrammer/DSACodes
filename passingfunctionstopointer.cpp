#include<bits/stdc++.h>

using namespace std;

void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}



int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a = 3;
    int b = 6;

    cout<<"Before swapping:"<<a<<" "<<b<<endl;
    int *aptr = &a;
    int *bptr = &b;
    swap(aptr,bptr);

    cout<<"After swapping:"<<a<<" "<<b<<endl;


    return 0;
}