#include<bits/stdc++.h>

using namespace std;


void SubStrings(string s,string ans){
    if(s.length() == 0){
        cout<<ans<<endl;
        return;
    }
   char ch = s[0];
   string ros = s.substr(1);

   SubStrings(ros,ans);
   SubStrings(ros,ans+ch);

}




int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s = "ABC";

    SubStrings(s,"");

    return 0;
}