int longestSubSeg(vector<int> &arr , int n, int k){
    // Write your code here.
    int i = 0,j=0;
    int maxi = 0;
    int countz = 0;

    while(j<n){
        if(arr[j] == 0) countz++;

        while(countz > k){
            if(arr[i] == 0){
                countz--;
            }
            i++;
        }
        maxi = max(maxi,j-i+1);
        j++;
    }
    return maxi;
    
}
