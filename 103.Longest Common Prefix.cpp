#include <bits/stdc++.h>
using namespace std;
string longestCommonPrefix(vector<string> &arr, int n)
{
    // Write your code herer
  
   sort(arr.begin(), arr.end());
   string ans = "";
   string a = arr[0];
   string b = arr[n-1];
   for(int i=0;i<a.size();i++){
       if(a[i]==b[i]) ans +=a[i];
       else break;
   }
   return ans;
}
