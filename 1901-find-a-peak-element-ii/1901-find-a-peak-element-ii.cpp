class Solution {
public:
    int findmax(vector<vector<int>> mat, int r){
        int maxe=INT_MIN;
        int idx=0;
        for(int i=0;i<mat[0].size();i++){
            
            if(maxe<mat[r][i]){
                maxe=mat[r][i];
                idx=i;
            }
        }
        return idx;
    }
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        int low = 0;
        int high = m-1;
        while(low <= high){
            int mid=(low + (high - low) / 2);
            int c = findmax(mat , mid);
            int val = mat[mid][c];
            if(mid == 0){
                if(mat[mid+1][c] < val){
                    return {mid , c};
                }
            }
            else if(mid==m-1){
                if(mat[mid-1][c]<val){
                    return {mid , c};
                }
            }
            else if(val>mat[mid+1][c] && val>mat[mid-1][c]){
                return {mid , c};
            }
            if( val<mat[mid+1][c]){                        
                                    
                low = mid + 1;
            }
            else{                     
                high = mid - 1;
            }
        }
        return {-1 , -1};
    }
};