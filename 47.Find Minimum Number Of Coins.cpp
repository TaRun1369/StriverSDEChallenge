vector<int> MinimumCoins(int amount)
{
    // Write your code here
     // code here
        vector<int> coins={1000,500,100,50,20,10,5,2,1};

    vector<int>ans;
    
    int anss = 0;
    for(auto i:coins){
        // cout<<amount<<" - amount"<<endl;

        anss = (amount/i);
        // cout<<anss <<" - anss"<<endl;
        if(anss >= 1){
            for(int it = 0;it<anss;it++){
                ans.push_back(i);
            }
        }
        

        amount= amount%i;
        // cout<<amount<<" - amount"<<endl;
    }
    return ans;
}


// #include <bits/stdc++.h> 
// int findMinimumCoins(int amount) 
// {
//     // int ans =0;
//     // vector<int> v = {1000,500,100,50,20,10,5,2,1};
//     // for(auto i : v){
//     //     ans += (amount/i);
//     //     amount %= i;
//     //     // if(a == 0 && rem != 0) continue;
//     //     // ans += a;
//     //     // amount = rem;
        
//     // }
//     // return ans;

// //    vector<int> coins={1000,500,100,50,20,10,5,2,1};

// //     int ans=0;

// //     for(auto i:coins){

// //         ans+=(amount/i);

// //         amount%=i;

// //     }

// //     return ans;

// vector<int> coins = {1,2,5,10,20,50,100,500,1000} ;
//     int ct = 0 ;
//     for(int i = 8 ; i >= 0 ; i--)
//     {
//         while(amount>=coins[i])
//         {
//             amount-=coins[i] ;
//             ct++ ;
//         }
//     }
//     return ct ;
//     // Write your code here
// }
