#include<bits/stdc++.h>

using namespace std;

int main(){
    int t1=0;
    int t2=1;
    int n;
    cout<<"Fibonacci series upto(terms):";
    cin>>n;
    cout<<t1<<"\n"<<t2<<endl;
    for(int i = 1;i <= n;i++){
        int t3 = t1 + t2;
        t1=t2;
        t2=t3;
        cout<<t3<<endl;
    }
    return 0;
}