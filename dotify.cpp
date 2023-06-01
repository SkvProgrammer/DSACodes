#include<iostream>
#include<climits>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){

        int N,K,L;
        cin>>N>>K>>L;
        int answer = 0;
        for(int i = 0; i < N;i++){
            int m,l;
            cin>>m>>l;
            int max_len = INT_MIN;
            if(K == 1){
            if(L == l){
                if(m > max_len){
                    answer = m;
                    max_len = m;
                }
            }
            }else{
                if(L == l){
                    answer+=m;
                }
            }




        }


        if(answer == 0){
            cout<<"-1"<<endl;
        }else{
            cout<<answer<<endl;
        }

    
    }
    return 0;
}