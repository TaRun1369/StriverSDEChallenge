#include <bits/stdc++.h> 
bool areAnagram(string &str1, string &str2){

    // Write your code here.
    //  sort(str1.begin(), str1.end());  
    // do {  
    //     if(str1 == str2) return true;  
    // } while(next_permutation(str1.begin(), str1.end()));  

    // return false;

    map<int,int> m1,m2;

    for(auto it : str1){
        m1[it]++;
    }
    for(auto it : str2){
        m2[it]++;
    }

    if(m1 == m2){
        return true;
    }
    return false;

}