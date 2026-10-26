#include <bits/stdc++.h>
using namespace std;

int main() {
    
    cin.tie(NULL);

    int n;
    long long S;
    if (!(cin >> n >> S)) return 0;

    vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    long long current_sum = 0;
    int left = 0;
    int min_len = n + 1;

    for (int right = 0; right < n; ++right) {
        current_sum += a[right];

        while (current_sum >= S) {
            min_len = min(min_len, right - left + 1);
            current_sum -= a[left];
            left++;
        }
    }

    if (min_len == n + 1) {
        cout << 0 << "\n";
    } else {
        cout << min_len << "\n";
    }

    return 0;
}