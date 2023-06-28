#include <bits/stdc++.h> 
// int singleNonDuplicate(vector<int>& arr)
// {
// 	// Write your code here
// 	// map<int,int> m;
// 	// for(int i =0;i<arr.size();i++){
// 	// 	m[arr[i]]++;
// 	// }

// 	// for(auto it : m) {
// 	// 	if(it.second == 1) return it.first;
// 	// }

// 	for(int i = 0;i<arr.size()-1;i+=2){
// 		if(arr[i] != arr[i+1]) return arr[i];
// 	}

// 	return arr[arr.size()-1];
// }

// int singleNonDuplicate(vector<int>& arr) {    
// 	int n = arr.size();    
// 	int answer1;

//    if (n == 1){
// 	    return arr[0];
// 	}

//    for (int i = 0; i < n - 1; i += 2)    {   
// 			if (arr[i] != arr[i + 1]) 
// 			{            
// 				answer1 = arr[i]; 
// 			   break;
// 			}   
// 	}

//     if (arr[n - 2] != arr[n - 1]){
// 		answer1 = arr[n - 1];
// 		    }

//    return answer1; 
//    }


int uniqueElement(vector<int> nums, int n)

{

// Write your code here

int high = nums.size() - 1;

int low = 0;

int mid;

//Boundry cases

if (high == 0) return nums[0];

 

else if (nums[0] != nums[1]) return nums[0];

 

else if (nums[high] != nums[high-1]) return nums[high];



while (low <= high) {

mid = low + (high - low) / 2;

//unique element conditions

 

if (nums[mid] != nums[mid+1] && nums[mid] != nums[mid-1]) {

return nums[mid];

}

if (((mid % 2) == 0 && nums[mid] == nums[mid+1])

|| ((mid % 2) == 1 && nums[mid] == nums[mid-1])) {

low = mid + 1;

} else {

high = mid - 1;

}

//return -1;

}

}


int singleNonDuplicate(vector<int> &arr){
	return uniqueElement(arr,arr.size());
}