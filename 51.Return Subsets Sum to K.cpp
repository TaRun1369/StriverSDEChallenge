vector<vector<int>> an;

void func(int k, int &ans, vector<int> &arr, int sum, int i, int n, vector<int> &sub) {
    if (i == n) {
        if (sum == k) {
            ans++;
            an.push_back(sub);
        }
        return;
    }
    func(k, ans, arr, sum, i + 1, n, sub); // Exclude current element
    sub.push_back(arr[i]);
    func(k, ans, arr, sum + arr[i], i + 1, n, sub); // Include current element
    sub.pop_back();
}

vector<vector<int>> findSubsetsThatSumToK(vector<int> arr, int n, int k) {
    int ans = 0;
    int sum = 0;
    int i = 0;
    vector<int> s;
    func(k, ans, arr, sum, i, n, s);
    return an;
}
