#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    //finding the number of occurence of a particular element

    int x = 12;
    int arr[6] = {12,1,2,3,12,12};

    auto a = lower_bound(arr,arr+5,x);
    auto b = upper_bound(arr,arr+5,x);
    cout<<b-a<<endl;


    return 0;
}