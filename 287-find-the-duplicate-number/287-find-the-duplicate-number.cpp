class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int tortoise = nums[0], rabit = nums[0];
        
        do{
            tortoise = nums[tortoise];
            rabit = nums[nums[rabit]];
        } while(tortoise != rabit);
        
        tortoise = nums[0];
        while(tortoise != rabit){
            tortoise = nums[tortoise];
            rabit = nums[rabit];
        }
        return tortoise;
    }
};