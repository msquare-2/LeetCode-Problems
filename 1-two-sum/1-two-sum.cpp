class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        unordered_map<int, int> bucket;
        for(int i = 0; i < nums.size(); i++) {
            if(bucket.find(target-nums[i]) != bucket.end()) {
                ans.push_back(bucket[target-nums[i]]);
                ans.push_back(i);
                return ans;
            }
            bucket[nums[i]] = i;
        }
        return ans;
    }
};