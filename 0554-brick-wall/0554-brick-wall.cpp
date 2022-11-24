class Solution {
public:
    int leastBricks(vector<vector<int>>& wall) {
    unordered_map<int,int> ump(wall.size());
       for(int i = 0; i < wall.size(); i++){
           int pos = 0;
           for(int j = 0; j < wall[i].size() - 1; j++){
               pos += wall[i][j];
               ump[pos]++;
           }
       }
        int maxi = 0;
        for(auto x : ump){
            maxi = max(maxi, x.second);
        }
        return wall.size() - maxi;
    }
};