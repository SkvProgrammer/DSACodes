#include<bits/stdc++.h>
#include<string>

using namespace std;


int main(){
    string s = "Satyam";
  //ASCII values are used
   /* for(int i=0;i < s.size();i++){
        if(s[i] >= 'a' &&  s[i]<= 'z'){
           s[i]-=32;
        }
    }*/

    transform(s.begin(),s.end(),s.begin(),::toupper);
    cout<<s<<endl;


    return 0;
}