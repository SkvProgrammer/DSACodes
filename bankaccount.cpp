#include<bits/stdc++.h>
#include<iomanip>

//iomanip is included whenever those functions which are  needed 
//to change the output
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int x;
        float y;
        cin>>x>>y;

        	if((x+0.50)<=y&&x%5==0){
	float total = y-x-0.50;
	cout <<fixed<<setprecision(2)<< total << endl;
	}
        
        
            }
    return 0;
}