#include <bits/stdc++.h> 


int uniquePaths(int m, int n) {
	// Write your code here.
	int upar = m+n-2;
	int neeche = n-1;
	double res = 1;
	for(int i =1;i<=neeche;i++){
		res *= (double)(upar-neeche+i)/(double)i;
	}
	return int(res);
	
}