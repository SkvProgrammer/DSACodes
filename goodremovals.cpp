#include <bits/stdc++.h>
using namespace std;

const int M = 1000000007;

int Remove(vector<int>& myarray) {
    int n = myarray.size();

    vector<int> count(2, 0);

    for (int i = 0; i < n; i++) {
        int num = myarray[i];
        int mycount = 0;
        while (num % 2 == 0) {
            num /= 2;
            mycount++;
        }
        count[mycount]++;
    }

    int good_removals = 0;
    int total_removals = (1 << n) - 1;
    for (int i = 0; i < n; i++) {
        int num = myarray[i];
        int mycount = 0;
        while (num % 2 == 0) {
            num /= 2;
            mycount += 1;
        }

        good_removals = (good_removals + (1LL << (n - 1 - i)) * count[mycount ^ 1]) % M;
    }

    good_removals = (good_removals * total_removals) % M;

    return good_removals;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> myarray(n);

        for (int i = 0; i < n; i++) {
            cin >> myarray[i];
        }

        int good_removals = Remove(myarray);

        cout << good_removals << "\n";
    }

    return 0;
}
