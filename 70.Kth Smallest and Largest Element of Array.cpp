vector<int> kthSmallLarge(vector<int> &arr, int n, int k)
{
        sort(arr.begin(),arr.end());
int ans1,ans2;
ans1 = arr[k-1];
ans2 = arr[n-k];
// cout<<ans1<<" ye  ans 1 aur 2"<<ans2 <<endl;
vector<int> ans = {ans1,ans2};
// ans.push_back(ans2);
return ans;
        // Write your code here.
}