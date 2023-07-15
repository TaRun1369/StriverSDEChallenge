int removeDuplicates(vector<int> &arr, int n) {

    int i=0;
    int j=1;
    int cnt=0;
    while(j<n){
        if(arr[i]!=arr[j]){cnt++;}
        i++,j++;
    }
    return cnt+1;
}