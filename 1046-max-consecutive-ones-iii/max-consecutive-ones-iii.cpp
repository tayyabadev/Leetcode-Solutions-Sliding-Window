class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int zero = 0, r = 0, l = 0, len = 0, maxlen = 0;
        while (r < nums.size()) {
            if (nums[r] == 0) {
                zero++;
            }
            len = r - l ;
            if (zero > k) {
                while (nums[l] != 0 && l<nums.size()) {
                    l++;
                }
                l++;
                zero--;
            } 
                len = r - l + 1;
        
            maxlen = max(maxlen, len);
            r++;
        }return maxlen;
    }
};