class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n = intervals.size();
        vector<vector<int>> mintervals;
        
        sort(intervals.begin(), intervals.end());
        
        vector<int> temp = intervals[0];
        for(auto it : intervals) {
            if(temp[1] >= it[0]) {
                temp[1] = max(temp[1], it[1]);
            }
            else {
                mintervals.push_back(temp);
                temp = it;
            }
        }
        mintervals.push_back(temp);
        return mintervals;
    }
};