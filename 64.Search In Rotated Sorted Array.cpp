int search(int* arr, int n, int key) {
    // Write your code here.
    int low = 0;
    int high = n-1;
    int mid;
    while(low<=high){
        mid = (low+high)/2;
        if(arr[mid] == key) return mid;
        // now array can be either left sorted or right sorted 
        // leftsorted
        if(arr[low] <= arr[mid]){
            if(arr[low] <= key && arr[mid] >= key){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        // right sorted
        else{
            if(arr[high] >= key && arr[mid] <= key){
                low = mid+1;
            }
            else{
                high = mid - 1;
            }
        }
    }
    return -1;



}