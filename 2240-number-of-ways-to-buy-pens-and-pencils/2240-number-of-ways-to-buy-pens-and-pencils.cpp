class Solution {
public:
    long long waysToBuyPensPencils(int total, int cost1, int cost2) {
        long long ways=0;
        long long pencost=0;
        while(pencost<=total){
            long long remainingAmount = total - pencost;
            long long pencils = remainingAmount/cost2 +1;
            ways += pencils;
            pencost += cost1;
        }
        return ways;
    }
};