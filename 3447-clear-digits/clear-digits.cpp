class Solution {
public:
    string clearDigits(string s) {
        unordered_map<char, int> nums = {{'1', 1}, {'2', 2}, {'3', 3}, {'4', 4},
                                         {'5', 5}, {'6', 6}, {'7', 7}, {'8', 8},
                                         {'9', 9}, {'0', 0}};
        string ans = "";
        int count=0;
        for (int i = s.size() - 1; i >= 0; i--) {
            if (nums.find(s[i])!=nums.end()){
                count++;
            }else{
                if(count>0){
                    count--;
                    continue;
                }else{
                    ans+=s[i];
                }
            }
        }reverse(ans.begin(),ans.end());
        return ans;
    }
};