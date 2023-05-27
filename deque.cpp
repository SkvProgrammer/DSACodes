#include<bits/stdc++.h>
using namespace std;
//define macros to save time 
#define print(name) for(auto i:name){cout<<i<<" ";};

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
deque<int> d;
d.push_back(10);
print(d);
d.push_back(12);
print(d);
d.push_front(15);
print(d);
d.pop_front();
print(d);

    return 0;
}