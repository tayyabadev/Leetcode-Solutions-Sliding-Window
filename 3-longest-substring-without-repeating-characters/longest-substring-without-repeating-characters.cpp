class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0, r = 0, maxlen = 0, len = 0;
        unordered_map<char, int> map;
        while (r < s.size()) {
            if (map.find(s[r]) != map.end() && map[s[r]] >= l) {
                l = map[s[r]] + 1;
                map[s[r]] = r;
            } else {
                len = r - l + 1;
                map[s[r]] = r;
            }

            maxlen = max(maxlen, len);
            r++;
        }
        return maxlen;
    }
};