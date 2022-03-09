class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        
        //Sort given intervals
        sort(intervals.begin(), intervals.end());
        vector<int> temp = intervals[0];
        
        for(int i=1; i<intervals.size(); i++){
            if(temp[1] >= intervals[i][0]){
                //Merge into temp
                temp[1] = max(intervals[i][1], temp[1]);
            }
            else{
                ans.push_back(temp);
                temp = intervals[i];
            }
        }
        //Storing remaining intervals into answer
        ans.push_back(temp);
        return ans;
    }
};