#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
#include <string>

using namespace std;

int main(){

    int t;
    cin >> t;
    vector <int> v;
    for(int i=0;i<t;i++){
        int n;
        cin >> n;
        v.push_back(n);
    }
    sort(v.begin(), v.end());
    int ans = 0;
}