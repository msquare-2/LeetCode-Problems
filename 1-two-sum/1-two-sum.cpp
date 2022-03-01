class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        unordered_map<int, int> hash;
        for(int i=0; i<nums.size(); i++) {
            int find = target - nums[i];
            if(hash.find(find) != hash.end()) {
                ans.push_back(hash[find]);
                ans.push_back(i);
                return ans;
            }
            hash[nums[i]] = i;
        }
        return ans;
    }
};