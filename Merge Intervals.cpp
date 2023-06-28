#include <bits/stdc++.h> 
// /*

//     intervals[i][0] = start point of i'th interval
//     intervals[i][1] = finish point of i'th interval

// */

bool comparePairs(vector<int>& a, vector<int>& b) {
    return a[0] < b[0];
}

// vector<vector<int>> mergeIntervals(vector<vector<int>> &interval)
//  {
//     sort(interval.begin(),interval.end(),comparePairs);
//     // vector<vector<int>>ans;
//     for(int i = 1;i<interval.size();i++){
//         vector<int> intt = interval[i-1];
//         if(interval[i-1][0] <= interval[i][1] && interval[i-1][0] > interval[i][0]){
//             interval[i][0] = interval[i-1][0];
//             // interval.erase(intt);
//               interval.erase(std::remove(interval.begin(), interval.end(), intt), interval.end());

//         }
//     }
//     // Write your code here.
// }

vector<vector<int>> mergeIntervals(vector<vector<int>> &interval)
{
    sort(interval.begin(), interval.end(), comparePairs);
    vector<vector<int>> mergedIntervals;
    mergedIntervals.push_back(interval[0]);  // Add the first interval to the result

    for (int i = 1; i < interval.size(); i++) {
        vector<int> currentInterval = interval[i];
        vector<int> &lastMerged = mergedIntervals.back();  // Reference to the last merged interval

        if (lastMerged[1] >= currentInterval[0]) {
            // Intervals overlap, update the finish point of the last merged interval
            lastMerged[1] = max(lastMerged[1], currentInterval[1]);
        } else {
            // Intervals don't overlap, add the current interval to the result
            mergedIntervals.push_back(currentInterval);
        }
    }

    return mergedIntervals;
}

