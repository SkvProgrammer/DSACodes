#include<bits/stdc++.h>

using namespace std;

void replacepi(string s){
    if(s.length() == 0){//base case
      return;
    }
    if(s[0] == 'p' && s[1] == 'i'){
        cout<<"3.14";
        replacepi(s.substr(2));//string after 3 index in now taken in consideration
    }else{
        cout<<s[0];
        replacepi(s.substr(1));
    }

}





int main(){
    ios::sync_with_stdio(0);
    cin.tie();
    string s = "pimypithisispiagreatpi";
    replacepi(s);



    return 0;
}