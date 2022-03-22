```
class Solution {
public:
int rob(vector<int>& nums) {
int n = nums.size();
int prev1 = nums[0];
int prev2 = 0;
for(int i=0; i<n; i++){
int take = nums[i];
if(i-2 >= 0)
take += prev2;
int notake = 0;
if(i-1 >= 0)
notake += prev1;
int cur = max(take, notake);
prev2 = prev1;
prev1 = cur;
}
return prev1;
}
};
```