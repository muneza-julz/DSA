#include <bits/stdc++.h>
using namespace std;
// Program to check the minimum operations to increase or decrease height by one needed to make all towers equal
int main() {
    int n;
    cin >> n;
    vector<int> heights(n);
    for (int i = 0; i < n; i++) {
        cin >> heights[i];
    }

    vector<int> sums(n);
    for(int i = 0; i < n; i++) {
        int operations = 0;
        for(int j = 0; j < n; j++) {
            operations += abs(heights[i] - heights[j]);
        }
        sums[i] = operations;
    }
    sort(sums.begin(), sums.end());
    cout << sums[0] << endl;
    return 0;
}