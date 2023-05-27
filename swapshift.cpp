#include<bits/stdc++.h>
using namespace std;

vector<int> lex_smallest_permutation(vector<int> A) {
    int min_idx = 0;
    // Find the index of the smallest element
    for (int i = 1; i < A.size(); i++) {
        if (A[i] < A[min_idx]) {
            min_idx = i;
        }
    }
    // Perform left shifts until the smallest element is at the first position
    for (int i = 0; i < min_idx; i++) {
        int temp = A[0];
        for (int j = 0; j < A.size() - 1; j++) {
            A[j] = A[j + 1];
        }
        A[A.size() - 1] = temp;
    }
    // Perform at most two swaps to place the second and third smallest elements in the second and third positions
    for (int i = 1; i < min(3, (int)A.size()); i++) {
        for (int j = i + 1; j < A.size(); j++) {
            if (A[i] > A[j]) {
                swap(A[i], A[j]);
                break;
            }
        }
    }
    return A;
}


int main() {
    int t;
    cin>>t;
    while(t--){
    int size;
    cin>>size;
    vector<int> A;
    for(int i = 0; i < size;i++){
        cin>>A[i];
    }
    vector<int> res = lex_smallest_permutation(A);
    for(auto i: res){
         cout<<i<<" ";
    }
    }
    return 0;
}
