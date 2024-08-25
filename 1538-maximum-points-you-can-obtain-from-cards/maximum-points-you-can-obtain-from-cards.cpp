class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int rsum=0, lsum=0;
        for(int i=0;i<k;i++){
            lsum+=cardPoints[i];
        }
        int maxsum=lsum;
        int j=cardPoints.size()-1;
        for(int i=k-1;i>=0;i--){
            lsum-=cardPoints[i];
            rsum+=cardPoints[j];
            j--;
            maxsum=max(maxsum,rsum+lsum);
        }return maxsum;
    }
};