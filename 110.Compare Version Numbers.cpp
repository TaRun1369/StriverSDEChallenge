#include <bits/stdc++.h> 

string rzfe(string s){

    int p = s.size() -1;
    for(int i = s.length() - 1;i>=1;i-=2){
        if(s[i] == '0' && s[i-1] == '.'){
            p-=2;
        }
        else{
            break;
        }
    }

    return s.substr(0,p+1);
   
}


int compareVersions(string a, string b) 
{
    a = rzfe(a);
    b = rzfe(b);
    int s1=0,s2 = 0,e1 = 0,e2 = 0;
    while(true){
        while(e1 < a.size() && a[e1] != '.'){
            e1++;
        }
        while(e2 < b.size() && b[e2] != '.'){
            e2++;
        }

        if(e1>e2){
            return 1;
        }
        else if(e1<e2){
            return -1;
        }

        for(int i = s1;i<e1;i++){
            if(a[i] > b[i]) return 1;
            if(a[i] < b[i]) return -1;
        }

        if(e1 == a.size() && e2 == b.size()){
            return 0;
        }

        if(e1 == a.size()) return -1;
        if(e2 == b.size()) return 1;
        s1 = e1;
        s2 = e2;
        e1++;
        e2++;


    }
    // Write your code here
}