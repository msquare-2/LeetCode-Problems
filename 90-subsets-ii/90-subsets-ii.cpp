class Solution {
private:
    void psrec(int index, vector<int> &nums, vector<int> &ds, vector<vector<int>> &res) {
        res.push_back(ds);
        for(int i=index; i < nums.size(); i++) {
            if(i != index && nums[i] == nums[i-1]) continue;
            ds.push_back(nums[i]);
            psrec(i+1, nums, ds, res);
            ds.pop_back();
        }
    }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> ds;
        sort(nums.begin(), nums.end());
        psrec(0, nums, ds, res);
        return res;
    }
};