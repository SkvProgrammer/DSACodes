#include<bits/stdc++.h>

using namespace std;

int main(){
    /*int array[4] = {2,4,1,3};
   cout<<array[0];
*/

//array input
 int n;
 cin>>n;
int array[n];

for(int i = 0;i<n;i++){
    cin>>array[i]; 
}
for(int j = 0;j<n;j++){
    cout<<array[j];
}

    return 0;
}