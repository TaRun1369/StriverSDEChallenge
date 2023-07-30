#include <bits/stdc++.h> 
// int atoi(string str) {
//     // Write your code here.
// }

int atoi(string str) {    // Write your code here.    
int i=0;   
 int sign=1; 
    int ans=0; 
    while(i<str.length()){ 
        if(str[i]>='0'&&str[i]<='9')
        {
           int digit=str[i]-'0';
           ans=ans*10+digit;
        }
        i++;
    }

 if(str[0]=='-'){
    sign=-1;
    }    
    return ans*sign;
}