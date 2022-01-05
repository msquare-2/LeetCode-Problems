class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r = matrix.size();
        int c = matrix[0].size();
        /* Left-Right approach
        int i = 0, j = c-1;
        while(i < r && j < c) {
            if(target == matrix[i][j]) {
                return true;
            }
            else if(target < matrix[i][j]) {
                j--;
            }
            else if(target > matrix[i][j]) {
                i++;
            }
        }
        return false;
        */
        
        // Imaginery indexing approach
        
        int low = 0;
        int high = (r*c)-1;
        
        while(low <= high) {
            int mid = (low + (high - low) / 2);
            if(matrix[mid/c][mid%c] == target) {
                return true;
            }
            else if(matrix[mid/c][mid%c] < target) {
                low = mid +1;
            }
            else {
                high = mid - 1;
            }
        }
        return false;
        
    }
};