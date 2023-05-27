#include<bits/stdc++.h>
using namespace std;
#define print(name) for(auto i:name){cout<<i<<" ";};
int main(){
ios::sync_with_stdio(0);
cin.tie(0);

stack<int> s;
s.push(5);
s.push(10);
s.pop();
//we can only access the top element in a stack 
cout<<s.top()<<endl;


    return 0;
}