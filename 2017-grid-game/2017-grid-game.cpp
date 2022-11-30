class Solution {
public:
    long long gridGame(vector<vector<int>>& grid) {
        long long topsum = accumulate(grid[0].begin(), grid[0].end(),0ll);
        long long bottomsum = 0ll;
        long long ans = LLONG_MAX;
        for(long long i = 0; i < grid[0].size(); i++){
            topsum -= grid[0][i];
            ans = min(ans, max(topsum, bottomsum));
            bottomsum += grid[1][i];
        }
        return ans;
    }
};