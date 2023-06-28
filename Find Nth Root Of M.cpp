
#include <bits/stdc++.h> 

// double getNthPath(int n,int m){
// 	double temp = 1.0/n;
// 	return pow(m,temp);
// }
// int NthRoot(int n, int m) {
//   // // Write your code here.
//   // double q = (double)1/n;
//   // cout<<q<<endl;
//   // double l = pow(m,q);
//   // cout<<l<<endl;
//   // cout<<pow(l,n)<<endl;
//   // double p = pow(l,n);
//   // cout<<p<<endl;
//   // if(p == m) return l;
//   // else if((int(p)+1) == m) return l+1;
//   // return -1; 

//   return int(getNthPath(n,m));
// }

int NthRoot(int n, int m) {

  // Write your code here.

  double k = pow(m, 1.0 / n);

    if (abs(k - round(k)) < 1e-9) {

        return round(k);

    } else {

        return -1;

    }

}