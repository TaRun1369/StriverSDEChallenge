#include <vector>
#include <map>
#include <queue>

vector<int> KMostFrequent(int n, int k, vector<int> &arr) {
    map<int, int> mp;
    for (auto it : arr) {
        mp[it]++;
    }

    priority_queue<pair<int, int>> pq; // Max heap with frequency as the key

    for (auto it : mp) {
        pq.push({it.second, it.first});
    }

    vector<int> ans;
    for (int i = 0; i < k; i++) {
        ans.push_back(pq.top().second);
        pq.pop();
    }

    return ans;
}
