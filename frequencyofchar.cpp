#include<bits/stdc++.h>
#include<string>


using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s = "abbbbbcd";
    int freq[26]; //for 26 alphabets

    for(int i = 0;i < 26;i++)
        freq[i] = 0;
    for(int i = 0;i < 26;i++)
        freq[s[i]-'a']++;

    int mx = 0;
    for(int i =0;i < 26;i++){
        if(freq[i] > mx){
            mx = max(mx,freq[i]);
        }
    }

    cout<<mx<<endl;
    return 0;

}