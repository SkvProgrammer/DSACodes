#include<bits/stdc++.h>

using namespace std;




string removeX(string s){
    if(s.length() == 0){
        return "";
    }

    char ch = s[0];
    string ans = removeX(s.substr(1));

    if(ch == 'x'){
        return (ans+ch);
    }

    return (ch+ans);


}






int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s = "abcxxxfxxck";
    cout<<removeX(s);

    return 0;
}