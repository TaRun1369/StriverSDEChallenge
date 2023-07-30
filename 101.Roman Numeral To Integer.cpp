int romanToInt(string s){
  // Write your code here
  map<char, int> mp = {
    {'I' , 1},
    {'V' , 5},
    {'X' , 10},
    {'L' , 50},
    {'C' , 100},
    {'D' , 500},
    {'M' , 1000}};

int n = s.size();
if(n == 1) return mp[s[0]];
int ans = 0;
// int flag = false;
for (int i = 0; i < n ; i++) {
  char prev = s[i];
  char curr = s[i + 1];

  if (mp[prev] < mp[curr]) {
    // i++;
    ans -= mp[prev];
  } else {
    // i++;
    ans += mp[prev];
  }
//   if (i == n) {
//       flag = true;
//     break;
//   }
    }
    // if(flag == true) ans+=mp[s[n-1]];
    return ans;
    
}