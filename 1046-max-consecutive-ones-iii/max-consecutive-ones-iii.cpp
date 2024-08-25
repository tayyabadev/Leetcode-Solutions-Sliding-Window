class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int zero=0,l=0,r=0,len=0,maxl=0;
        while(r<nums.size()){
            if(nums[r]==0){
                zero++;
            }
            if(zero>k){
                while(nums[l]!=0 &&l<=r){
                    l++;
                }
                zero--;
                l++;
            }else{
                len=r-l+1;
            }
            r++;
            maxl=max(len,maxl);
        }return maxl;
    }
};