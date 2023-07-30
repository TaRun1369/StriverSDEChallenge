#include <bits/stdc++.h> 
#include <vector>

void help(std::vector<int>& arr, std::vector<std::vector<int>>& ans, int n, int target, int index,
          std::vector<int>& ans1, int sum) {
    if (sum > target) {
        return;
    }

    if (sum == target) {
        ans.push_back(ans1);
        return;
    }

    for (int i = index; i < n; ++i) {
        // Skip duplicates to avoid duplicate combinations
        if (i > index && arr[i] == arr[i - 1])
            continue;

        ans1.push_back(arr[i]);
        help(arr, ans, n, target, i + 1, ans1, sum + arr[i]);
        ans1.pop_back();
    }
}

std::vector<std::vector<int>> combinationSum2(std::vector<int>& arr, int n, int target) {
    // Sort the input array to handle duplicates and generate combinations in lexicographical order
    std::sort(arr.begin(), arr.end());

    std::vector<std::vector<int>> ans;
    std::vector<int> ans1;

    help(arr, ans, n, target, 0, ans1, 0);

    return ans;
}
