class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int max_count = 0;
        set<int> bucket;
        for(int i = 0; i < nums.size(); i++) {
            bucket.insert(nums[i]);
        }
        for(int i = 0; i < nums.size(); i++) {
            if(!bucket.count(nums[i]-1)) {
                int cur_num = nums[i];
                int count = 1;
                while(bucket.count(cur_num+1)){
                    count+=1;
                    cur_num += 1;
                }
                max_count = max(count, max_count);
            }
        }
        return max_count;
    }
};