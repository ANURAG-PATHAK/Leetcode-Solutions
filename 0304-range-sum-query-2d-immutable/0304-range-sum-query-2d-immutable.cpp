class NumMatrix {
public:
    vector<vector<int>> nums;
    int row;
    int col;
    NumMatrix(vector<vector<int>>& matrix) {
        row = matrix.size();
        col = row > 0 ? matrix[0].size() : 0;
        nums = vector<vector<int>>(row+1, vector<int>(col+1, 0));
        for(int i=1; i<=row; i++) {
            for(int j=1; j<=col; j++) {
                nums[i][j] = matrix[i-1][j-1] + nums[i-1][j] + nums[i][j-1] - nums[i-1][j-1];
            }
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        return nums[row2+1][col2+1] - nums[row2+1][col1] - nums[row1][col2+1] + nums[row1][col1];
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */