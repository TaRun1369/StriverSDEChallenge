#include <vector>

int help(string &s,string &t,int si,int ti,vector<vector<int>> &dp){
        if(si < 0 || ti < 0){
                return 0;

        }
        if(s[si] == t[ti]){
                if(dp[si][ti] != -1) return dp[si][ti];
                return dp[si][ti] = 1 + help(s,t,si-1,ti-1,dp);
        }

        if(dp[si][ti] != -1) return dp[si][ti];
        return  dp[si][ti] = max(help(s, t,si - 1, ti,dp),help(s,t,si,ti-1,dp));
}
int lcs(string s, string t)
{

int n = s.size();
        int m = t.size();
vector<vector<int>> dp(n,vector<int>(m,-1));

        return help(s,t,n-1,m-1,dp);
        // Write your code here

}