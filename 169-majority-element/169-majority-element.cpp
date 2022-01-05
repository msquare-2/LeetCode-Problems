class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //Moore Voting Algo
        int n = nums.size();
        int elem = 0;
        int count = 0;
        for(auto it : nums) {
            if(count == 0)
                elem = it;
            if(it == elem)
                count += 1;
            else
                count -= 1;
        }
        return elem;
        
    }
};