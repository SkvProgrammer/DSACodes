#include<bits/stdc++.h>
#include<cmath>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int x1,y1;
        int x2,y2;
        cin>>x1>>y1>>x2>>y2;
        float alice_distance;
        float bob_distance;
        alice_distance = sqrt(pow(x1,2) + pow(y1,2));
        bob_distance = sqrt(pow(x2,2) + pow(y2,2));
        if(alice_distance > bob_distance){
            cout<<"ALEX"<<endl;
        }else if(alice_distance < bob_distance){
            cout<<"BOB"<<endl;
        }else{
            cout<<"EQUAL"<<endl;
        }
        }
    return 0;
}