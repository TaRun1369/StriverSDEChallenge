=#include <bits/stdc++.h>

vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	// Write your code here.

	int i = 0,j = 0;
	int n1 = arr1.size();
	int n2 = arr2.size();
	for(int k = 0;k<n2;k++){
		arr1.pop_back();
	}
	while(i<n1 && j < n2){
		if(arr1[i]>arr2[j]){
			arr1.insert(arr1.begin() + i,arr2[j]);
			// arr1.pop_back();
			i++;
			j++;
		}
		else{
			i++;
		}
	}
//Insert vector b at the end of vector a

	arr1.insert(std::end(arr1), std::begin(arr2)+j, std::end(arr2));


	return arr1;
}