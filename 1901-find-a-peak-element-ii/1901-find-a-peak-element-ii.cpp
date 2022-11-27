class Solution {
public:

int find_max_in_each_row(vector<vector<int>>&mat, int r){
        int column = 0;
        int Max = INT_MIN;
        
        for(int c=0; c<mat[0].size(); c++){ //humme ek row mai max element chahiye 
           Max = max(mat[r][c],Max);
            if(Max == mat[r][c]){
                column = c;
            }
        }
        return column;
    }
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        int column;
        int low = 0;
        int high = n-1;
        
        while(low<=high){
            
            int mid = low + (high-low)/2;
            column =  find_max_in_each_row(mat, mid);
            
           if(mid == 0){
                if(mat[mid][column]>mat[mid+1][column]){
                    return{mid,column};
                }
            }
            
            else if(mid == n-1){
                if(mat[mid][column]>mat[mid-1][column]){
                    return{mid,column};
                }
            }
            
            else if(mat[mid][column]>mat[mid+1][column] && mat[mid][column]>mat[mid-1][column]){ //we have                got the greatest element in a row to agal bagaldeakhne ki zarorat nhi hai 
                return {mid,column};
                
             }
            if(mat[mid][column]<mat[mid+1][column])
                low=mid+1;
            
            else
                high = mid-1;
            
        }      
        
     return {-1,-1};   
        
        
        
    }
};

