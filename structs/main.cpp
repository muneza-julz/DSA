#include <iostream>
// #include <utility>
#include <vector>
#include "math_utils.h"

using namespace std;

int main() {
    int count;
    cout << "How many pairs? ";
    cin >> count;

    vector<pair<int, int>> nums(count);

    for (int i = 0; i < count; ++i) {
        cout << "Enter pair " << i + 1 << ": ";
        cin >> nums[i].first >> nums[i].second;
    }

    for (int i = 0; i < count; ++i) {
        int sum = add(nums[i].first, nums[i].second);
        cout << nums[i].first << " + " << nums[i].second
             << " = " << sum << '\n';
    }

    return 0;
}