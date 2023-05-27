#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);

vector<int> v = {2,3,4,5,6};
reverse(v.begin(),v.end());

random_shuffle(v.begin(),v.end());
for(auto i:v){
    cout<<i<<endl;
}
   return  0;
}