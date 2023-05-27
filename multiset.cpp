#include<bits/stdc++.h>
using namespace std;
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
//set and multiset maintains the order of elements
//unordered_set and unordered_multiset doesn't maintains the order of the element

multiset<int> s;
s.insert(5);
s.insert(5);
s.insert(5);
//cout<<s.count(5)<<endl;

//removing all the instances of the elements
//s.erase(5);
//cout<<s.count(5)<<endl;//outputs 0
//to delete only one instance of the element in a multiset

s.erase(s.find(5));
cout<<s.count(5)<<endl;
    return 0;
}