#include<bits/stdc++.h>

using namespace std;

int main(){
    int a = 10;
    int * appr = &a;
    *appr = 20;
    cout<<a<<endl;
    cout<<appr<<endl;
    cout<<*appr<<endl;//dereferencing


    


    return 0;
}