#include <algorithm>    // std::next_permutation, std::sort  


string kthPermutation(int n, int k) {
    // Write your code here.
    int fact = 1;
    vector<int> number;
    for(int i = 1;i<n;i++){
       fact *= i;
        number.push_back(i);
    }
    number.push_back(n);
    k = k - 1;
    string ans = "";
    while(true){
        int va = k/fact;
        ans += to_string(number[va]);
        number.erase(number.begin() + va);
        if(number.size() == 0){
            break;

        }
        k %= fact;
        fact = fact / number.size();
    }

    return ans;
}
