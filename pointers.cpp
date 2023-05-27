#include<bits/stdc++.h>

using namespace std;

int main(){
 ios::sync_with_stdio(0);
 cin.tie(0);
/*int x = 10;
auto *pt  = &x; 
cout<<"Address of x:"<<*pt<<endl;
    return 0;
*/
//finding the value in the set at least 10
set<int> s = {1,2,3,4,6,7,8,9};
auto x = s.lower_bound(5);
auto y = s.upper_bound(5);
cout<<*x<<" "<<*y<<endl;


}