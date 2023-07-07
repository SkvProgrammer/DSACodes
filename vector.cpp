#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
     vector<int> v1 = {1,2,3};
     vector<int> v2 = {4,5,6};

     //swapping the elements of v1 and v2 using the swap function

     cout<<"Before swapping"<<endl;
     for(auto  i:v1){
        cout<<i<<endl;
             }

            cout<<endl;
    for(auto j:v2){
        cout<<j<<endl;
    }
     swap(v1,v2);


     //after swapping

cout<<"After swapping:"<<endl;
     for(auto i:v1){
        cout<<i<<endl;
     }

     cout<<endl;
     for(auto j:v2){
        cout<<j<<endl;
     }


    


    return 0;
}