class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        if(nums.size() < 3)
            return 0;
        int closestSum;
        sort(nums.begin(), nums.end());
        for(int f=0; f<nums.size()-2; f++){
            int s=f+1, t=nums.size()-1;
            while(s<t){
                int curSum = nums[f]+nums[s]+nums[t];
                if(curSum == target)
                    return curSum;
                if(abs(curSum-target)<abs(closestSum-target))
                    closestSum = curSum;
                if(curSum<target)
                    s++;
                if(curSum>target)
                    t--;
            }
        }
        return closestSum;
    }
};