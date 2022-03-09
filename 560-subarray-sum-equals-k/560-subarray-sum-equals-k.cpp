class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> myMap;
        int curSum=0, count=0;
        for(int it : nums){
            curSum += it;
            if(curSum == k)
                count++;
            if(myMap.find(curSum-k) != myMap.end()){
                count += myMap[curSum-k];
            }
            if(myMap.find(curSum) != myMap.end()){
                myMap[curSum] += 1;
            }
            else{
                myMap[curSum] = 1;
            }
        }
        return count;
    }
};