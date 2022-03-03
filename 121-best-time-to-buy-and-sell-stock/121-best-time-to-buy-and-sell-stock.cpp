class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit=0;
        int mincurr=INT_MAX;
        for(int i=0; i<prices.size(); i++) {
            mincurr = min(mincurr, prices[i]);
            maxProfit = max(maxProfit, prices[i]-mincurr);
        }
        return maxProfit;
    }
};