class Solution {
public:
    long long interchangeableRectangles(vector<vector<int>>& rectangles) {
        unordered_map<double,long long> ans;
        for(auto x : rectangles){
            ans[x[0]*1.0 / x[1]*1.0]++;
        }
        long long count = 0;
        for(auto x : ans){
            count += (x.second)*(x.second - 1) / 2;
        }
        return count;
    }
};