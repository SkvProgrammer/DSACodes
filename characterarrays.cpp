#include<bits/stdc++.h>

using namespace std;

int main(){
    //declaring charcater array : char array[n+1] = "Satyam"; because 
    //last character is null character (/0) so that the compiler 
    //should know that end of the sentence 
    char arr[100] = "Satyam";

    cout<<arr<<endl;
    
    //traversing through a character array
    int i = 0;

    while(arr[i] != '\0'){
        cout<<arr[i]<<" \n";
        i++;
    }

       return 0;
}