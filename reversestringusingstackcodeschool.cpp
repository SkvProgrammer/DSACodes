#include<bits/stdc++.h>

using namespace std;

void Reverse(char *C,int n){
    stack<char> S;
    for(int i = 0;i < n;i++){
        S.push(C[i]);
    }

    for(int i = 0;i < n;i++){
        C[i] = S.top();
        S.pop();
    }

}






//using language library to use stack - STL

int main(){
   char C[51];
   printf("Enter a string:\n");
   gets(C);
   Reverse(C,strlen(C));
   printf("Output = %s",C);



    return 0;
}