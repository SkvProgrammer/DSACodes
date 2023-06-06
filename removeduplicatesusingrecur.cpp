#include<bits/stdc++.h>

using namespace std;

string removeDupli(string s){
 if(s.length() == 0){
    return " ";
 }
  char ch = s[0];
  string ans = removeDupli(s.substr(1));

  if(ch == ans[0]){
    return ans;
  }else{
    return (ch+ans);
  }
}






int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s = "aaaabbbbbbccccc";

    cout<<removeDupli(s);

    return 0;
}