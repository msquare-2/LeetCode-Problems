class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxarea=0;
        int area=0;
        int left=0, right=height.size()-1;
        while(left<right){
            area = min(height[left],height[right])*(right-left);
            maxarea = max(maxarea, area);
            if(height[left]<height[right])
                left++;
            else
                right--;
        }
        return maxarea;
    }
};

//Time = O(N)
//Space = O(1)