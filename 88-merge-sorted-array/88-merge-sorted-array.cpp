class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for(int i = m; i < nums1.size(); i++) nums1[i]=nums2[i-m];
            int gap = (n+m)%2?(n+m):(n+m+1);
        
        // Using Gap algorithem for sorting
        while(gap > 1){
            gap = gap%2==0?gap/2:gap/2+1;
            for(int i = 0 ; i < nums1.size(); i++){
                if((i+gap < nums1.size()) && nums1[i] > nums1[i+gap]) swap(nums1[i], nums1[i+gap]);
            }
            
        }
    }
};