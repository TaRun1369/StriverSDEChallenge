#include <bits/stdc++.h> 
class Kthlargest {
    priority_queue<int,vector<int>,greater<int>> pq;
    int K;
public:
    Kthlargest(int k, vector<int> &arr) {
       // Write your code here.
    int K = k;
       for(auto &it : arr){
           pq.push(it);
       }

       while(pq.size() > k){
           pq.pop();
       }


    }

    int add(int num) {
       
       if(pq.top() < num){
           pq.pop();
           pq.push(num);
       }
   

        return getKthLargest();

        // Write your code here.
    }

    int getKthLargest() {
        return pq.top();
       // Write your code here.
    }

};
