int calculateMinPatforms(int at[], int dt[], int n) {
    // Write your code here.
    sort(at,at+n);
    sort(dt,dt+n);

    int currPU = 1;
    int maxPU = 1;
    int i = 1,j=0;
    while(i<n&&j<n){
        if(at[i] <= dt[j]){
            currPU++;
            i++;
            maxPU = max(maxPU,currPU);
        }
        else{
            currPU--;
            j++;
        }
    }
    return maxPU;
}