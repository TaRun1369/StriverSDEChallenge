
void func(int sum,int ind,vector<int> &num,vector<int> &ans,int N){
        if(ind == N){
                ans.push_back(sum);
                return;

        }

        func(sum + num[ind],ind+1,num,ans,N);

        func(sum,ind+1,num,ans,N);
}

vector<int> subsetSum(vector<int> &num){
        // Write your code here.
        
         vector<int> ans;
        func(0,0,num,ans,num.size());
        sort(ans.begin(),ans.end());
        return ans;        
}