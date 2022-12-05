class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        int ans = INT_MAX;
        k = k - 1;
        if(nums.size() == 1){
            return 0;
        }
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size() - k; i++){
            ans = min(ans, nums[k+i] - nums[i]);
        }
        return ans;
    }
};