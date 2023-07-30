int maxProfit(vector<int>& values, vector<int>& weights, int n, int w)
{
        vector<int>result(w + 1, 0); 
  
    // Loop to consider all the items 
    for(int i=0; i < n; i++)
    {
            // Loop to consider all the weights 
            for(int j = w; j >= weights[i]; j--)
            {
                    result[j] = max(result[j], values[i] + result[j - weights[i]]);
            }
    }  
     
    // Return the final maximum profit 
    return result[w]; 
}