long long getTrappedWater(long long* arr, int n) {
    long long res = 0;
    int left = 0;
    int right = n-1;
    int leftmax = arr[0];
    int rightmax = arr[n-1];
    while(left <= right){
        if(arr[left] <= arr[right]){
            if(arr[left] > leftmax){
                leftmax = arr[left];
            }
            else{
                res+= (leftmax - arr[left]);
            }
            left++;
        }
        else{
            if(arr[right] > rightmax){
                rightmax = arr[right];
            }
            else{
                res += (rightmax - arr[right]);
            }
            right--;
        }
    }
    return res;
}