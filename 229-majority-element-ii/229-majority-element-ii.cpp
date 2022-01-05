class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
        
        // Moore voting algo for N/3 occurences
        int num1 = INT_MAX;
        int num2 = INT_MAX;
        int count1 = 0;
        int count2 = 0;
        for(int it : nums) {
            if(it == num1)
                count1++;
            else if(it == num2)
                count2++;
            else if(count1 == 0) {
                num1 = it;
                count1 = 1;
            }
            else if(count2 == 0) {
                num2 = it;
                count2 = 1;
            }
            else {
                count1--;
                count2--;
            }
        }
        
        // Count number 1 and number 2 frequency
        count1 = 0;
        count2 = 0;
        for(int it : nums) {
            if(it == num1)
                count1++;
            if(it == num2)
                count2++;
        }
        
        // Check if number frequency is greater than floor of N/3
        if(count1 > n/3)
            ans.push_back(num1);
        if(count2 > n/3)
            ans.push_back(num2);
        
        return ans;
    }
};