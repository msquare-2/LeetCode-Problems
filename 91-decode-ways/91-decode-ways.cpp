class Solution {
public:
    int recur(int indx, string &s, vector<int> &dp){
        if(indx >= s.size())
            return 1;
        if(dp[indx] != -1)
            return dp[indx];
        int ans=0;
        int onePick = s[indx]-'0', twoPick=0;
        if(indx<s.size()-1)
            twoPick = onePick*10 + s[indx+1]-'0';
        
        if(onePick>0)
            ans += recur(indx+1, s, dp);
        if(onePick>0 and twoPick>0 and twoPick<=26)
            ans += recur(indx+2, s, dp);
        
        return dp[indx] = ans;
    }
    int numDecodings(string s) {
        vector<int> dp(101, -1);
        return recur(0, s, dp);
    }
};