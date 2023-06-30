#include<bits/stdc++.h>
#define MAX_SIZE 101


int top = -1;
int A[MAX_SIZE];

using namespace std;

void Push(int x){
    if(top == MAX_SIZE - 1){
        cout<<"Error:Stack overflow"<<endl;
        return;
    }
    top++;
    A[top] = x;
}
void Pop(){
    if(top == -1){
        cout<<"Error : Stack underflow"<<endl;
    }
    top--;
}

void Top(){
    cout<<A[top]<<endl;
}

void Print(){
    for(int i=0;i <= top;i++){
        cout<<A[i]<<endl;
    }
}

int main()
{  

    Push(5);Print();
    Push(10);Print();
    Push(12);Print();
    Pop();Print();
    Top();

    return 0;
}