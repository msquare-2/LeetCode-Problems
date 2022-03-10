class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int m = matrix.size()-1;
        int n = matrix[0].size()-1;
        
        // Transpose the matrix
        for(int i=0; i<=m; i++){
            for(int j=i; j<=n; j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        
        // Reverse row of each column
        for(int i=0; i<=m; i++){
            for(int j=0; j<=n/2; j++){
                swap(matrix[i][j], matrix[i][n-j]);
            }
        }
    }
};