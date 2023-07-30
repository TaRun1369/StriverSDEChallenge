#include <bits/stdc++.h>
using namespace std;

int subarraysXor(vector<int> &arr, int x) {
    int n = arr.size();
    int ans = 0;
    unordered_map<int, int> xorCount;
    vector<int> prefixXor(n, 0);
    prefixXor[0] = arr[0];

    // Calculate the prefix XOR array
    for (int i = 1; i < n; i++) {
        prefixXor[i] = prefixXor[i - 1] ^ arr[i];
    }

    for (int i = 0; i < n; i++) {
        int target = prefixXor[i] ^ x;

        // If the target XOR value is already in the hashmap, increment 'ans' by its count
        if (xorCount.find(target) != xorCount.end()) {
            ans += xorCount[target];
        }

        // If the current prefix XOR equals 'x', increment 'ans'
        if (prefixXor[i] == x) {
            ans++;
        }

        // Update the XOR count hashmap
        xorCount[prefixXor[i]]++;
    }

    return ans;
}