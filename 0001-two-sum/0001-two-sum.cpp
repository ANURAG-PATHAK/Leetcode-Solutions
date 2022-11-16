class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>> pair;
        for(int i = 0; i < nums.size(); i++){
            pair.push_back({nums[i],i});
        }
        sort(pair.begin(), pair.end());
        int first = 0;
        int last = nums.size() -1;
        while(first < last){
            if(pair[first].first + pair[last].first > target) last--;
            else if(pair[first].first + pair[last].first < target) first++;
            else return {pair[first].second, pair[last].second};
        }
        return {0};
    }
};