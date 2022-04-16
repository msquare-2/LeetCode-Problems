class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int ans = 1e6;
        for(int x : nums) {
            if(abs(x) < abs(ans)) {
                ans = x;
            } else if(abs(x) == abs(ans)) {
                ans = max(ans, x);
            }
        }
        return ans;
    }
};