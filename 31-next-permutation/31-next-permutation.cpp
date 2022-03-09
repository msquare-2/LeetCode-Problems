class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        if(n==1)
            return;
        int i = 1;
        int lastPeek = -1;
        while(i<n){     //Find Last peak of last ASC order 
            if(nums[i]>nums[i-1])
                lastPeek = i;
            i++;
        }
        
        if(lastPeek == -1){     //Check if sequence is in DSC order
            for(i=0; i < n/2; i++){
                swap(nums[i], nums[n-1-i]);
            }
            return;
        }
        
        //Find element in the range(nums[lastpeek-1] to nums[lastpeak]) to the right
        int index = lastPeek;
        for(i=lastPeek; i<n; i++){
            if(nums[i]>nums[lastPeek-1] && nums[i]<nums[lastPeek]){
                index = i;
            }
        }
        swap(nums[index], nums[lastPeek-1]);
        sort(nums.begin()+lastPeek, nums.end());
    }
};