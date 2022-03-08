class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int elem = 0;
        int count = 0;
        for(auto it : nums) {
            if(count == 0)
                elem = it;
            if(it == elem)
                count++;
            if(it != elem)
                count--;
        }
        return elem;
    }
};