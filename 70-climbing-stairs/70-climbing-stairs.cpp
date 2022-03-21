class Solution {
public:
    int climbStairs(int n) {
        int one=1;
        int two=1;
        int cur=1;
        
        if(n<=1){
            return 1;
        }
        for(int i=0; i<n-1; i++){
            cur = one + two;
            two = one;
            one = cur;
        }
        return cur;
    }
};