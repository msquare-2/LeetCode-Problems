class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int sum = 0, ans;
        int left=0,  right=cardPoints.size()-k;
        
        for(int i=right; i<cardPoints.size(); i++){
            sum += cardPoints[i];
        }
        ans = sum;
        while(right < cardPoints.size()){
            sum = sum-cardPoints[right]+cardPoints[left];
            ans = max(ans, sum);
            left++;
            right++;
        }
        return ans;
    }
};