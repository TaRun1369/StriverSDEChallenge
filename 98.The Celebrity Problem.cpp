#include <bits/stdc++.h> 
/*
	This is signature of helper function 'knows'.
	You should not implement it, or speculate about its implementation.

	bool knows(int A, int B); 
	Function 'knows(A, B)' will returns "true" if the person having
	id 'A' know the person having id 'B' in the party, "false" otherwise.
*/

int findCelebrity(int n) {


	stack<int> s;
	for(int i = 0;i<n;i++){
		s.push(i);
	}

	while(s.size() > 1){
		int a = s.top();
		s.pop();
		int b = s.top();
		s.pop();

		if(knows(a,b)){
			s.push(b);
		}
		else {
			s.push(a);
		}

	}

	if(s.size() > 1) return -1;
	int ansp = s.top();
	for(int i = 0;i<n;i++){
		// if(i == ansp) continue;
		if(i != ansp && !knows(i,ansp))

        {

            return -1;

        }
		
			if(knows(ansp,i)){
				return -1;
			}
		
			

	}
	return ansp;
 	// Write your code here.
}