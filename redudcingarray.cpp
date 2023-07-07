#include<bits/stdc++.h>

using namespace std;
bool myCompare(pair<int,int> p1,pair<int,int> p2){
return p1.first < p2.first;  

}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int arr[8] = {10,16,7,14,5,3,12,9};
    //vector of pair
    vector<pair<int,int>> p;
    for(int i = 0; i < (sizeof(arr)/sizeof(arr[0]));i++){
        p.push_back(make_pair(arr[i],i));
    }


    sort(p.begin(),p.end(),myCompare);
    
    for(int i = 0; i 
    < p.size();i++){
        arr[p[i].second] = i;
    }

    for(int i = 0; i 
    < p.size();i++){
       cout<<arr[i]<<endl;
    }cout<<endl;




    return 0;
}