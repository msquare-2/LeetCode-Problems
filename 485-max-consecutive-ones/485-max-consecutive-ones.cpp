class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxcount = 0, count = 0;
        for(auto it : nums) {
            if(it == 1) {
                count+=1;
            }
            else {
                count = 0;
            }
            maxcount = max(maxcount, count);
        }
        return maxcount;
    }
};