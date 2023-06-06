#include<bits/stdc++.h>

using namespace std;

void towerofhanoi(int n,char src,char helper,char dest){
    if(n==0){
        return;
    }
    towerofhanoi(n-1,src,dest,helper);//sdh
    cout<<"Move from "<<src<<" to "<<dest<<endl;
    towerofhanoi(n-1,helper,dest,src);//hds
}





int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
     towerofhanoi(3,'A','B','C');

    return 0;
}