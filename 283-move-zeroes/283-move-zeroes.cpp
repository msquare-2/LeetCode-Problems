class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int nonZero = 0;
        for(int cur=0; cur<nums.size(); cur++) {
            if(nums[cur] != 0) {
                nums[nonZero++] = nums[cur];
            }
        }
        for(;nonZero < nums.size(); nonZero++){
            nums[nonZero] = 0;
        }
    }
};