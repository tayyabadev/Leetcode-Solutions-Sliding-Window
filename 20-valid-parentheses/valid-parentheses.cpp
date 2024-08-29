class Solution {
public:
    bool isValid(string s) {
        unordered_map<char, char> map = {{')', '('}, {'}', '{'}, {']', '['}};
        stack<char> mystack;
        for (int i = 0; i < s.size(); i++) {
            if (map.find(s[i]) == map.end()) {
                mystack.push(s[i]);
            } else {
                if (mystack.empty() || map[s[i]] != mystack.top()) {
                    return false;
                }
                mystack.pop();
            }
        }
        return mystack.empty();
    }
};