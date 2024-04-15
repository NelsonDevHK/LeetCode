class Solution {
public:
    bool isValid(string s) {
        stack<char> Stack;
        if(s.size() == 0)
            return true;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '(' || s[i] == '[' || s[i] == '{')
            Stack.push(s[i]);
            else if((s[i] == ')' && !Stack.empty() && Stack.top() == '(') || 
                    (s[i] == ']' && !Stack.empty() && Stack.top() == '[') || 
                    (s[i] == '}' && !Stack.empty() && Stack.top() == '{')){
                Stack.pop();
            }
            else
                return false;
        }
        if(Stack.empty())
            return true;
        return false;
    }
};