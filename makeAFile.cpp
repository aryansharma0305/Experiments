#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
#include <string>

using namespace std;

bool binarySearch(const vector<int>& v, int x) {
    int left = 0, right = v.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (v[mid] == x) {
            return true;
        }
        if (v[mid] < x) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return false;
}

int main() {
    int t;
    cin >> t;
    vector<int> v;
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        v.push_back(n);
    }
    sort(v.begin(), v.end());
    int ans = 0;
    for (int i = 0; i < t; i++) {
        if (v[i] > ans) {
            ans++;
        }
    }

    // Example usage of binary search
    int x;
    cout << "Enter a number to search: ";
    cin >> x;
    if (binarySearch(v, x)) {
        cout << x << " is present in the array." << endl;
    } else {
        cout << x << " is not present in the array." << endl;
    }
}