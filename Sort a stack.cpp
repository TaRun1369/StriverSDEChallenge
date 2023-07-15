#include <bits/stdc++.h> 

void sortedinsert(stack<int> &s,int num){
	if(s.empty() || (!s.empty() && s.top() <num)){
		s.push(num);
		return;
	}
	int n = s.top();
	s.pop();

	sortedinsert(s,num);

	s.push(n);
}

void sortStack(stack<int> &s)
{
	if(s.empty()){
		return;
	}

	int num = s.top();

	s.pop();

	sortStack(s);

	sortedinsert(s,num);


	// Write your code here
}