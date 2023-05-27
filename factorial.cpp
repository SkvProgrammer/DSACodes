#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    int factorial = 1;
    for(int i = 2;i <= n;i++){
        factorial = factorial * i;
    }
    cout<<"Factorial of "<<n<<" is:"<<factorial<<endl;
    return 0;
}