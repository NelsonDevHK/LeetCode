class Solution {
public:
    bool isPalindrome(string s) {
        vector<char>v;
        for(int i = 0 ; i < s.size() ; i++){// push to new vector with alphabet only
            if(isalnum(s[i]))
                v.push_back(tolower(s[i]));
        }
        if(v.size() < 1)
            return true;
        int lastPos = v.size() - 1;
        for(int j = 0 ; j < v.size() - 1 ; j++){
            if(v[j] != v[lastPos--])
                return false;
        }
        return true;
    }
};