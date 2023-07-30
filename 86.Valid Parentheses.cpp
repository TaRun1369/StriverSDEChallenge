bool isValidParenthesis(string s1)
{
    // Write your code here.
    stack<char> s;
    for(auto it : s1){
        if(it == '(' || it == '{' || it == '['){
            s.push(it);
        }
        else{
            if(it == ')') {
                if(!s.empty() && s.top() == '('){
                    s.pop();
                } else {
                  return false;
                }
            }
            if (it == '}') {
              if (!s.empty() && s.top() == '{') {
                s.pop();
              } else {
                return false;
              }
            }
            if (it == ']') {
              if (!s.empty() && s.top() == '[') {
                s.pop();
              } else {
                return false;
              }
            }
        }
    }
    return true;
}