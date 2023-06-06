#include<bits/stdc++.h>
#include<string>

using namespace std;


void reverse(string s){
    if(s.length() == 0){
        return;
    }

    string pos = s.substr(1);//substring starting from index 1
    reverse(pos);
    cout<<s[0];


}






int main(){
    string s = "binod";
   //calling the reverse function
  reverse(s);
 


    return 0;
}