class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int total = 0;
        int maxSum = nums[0];
        int curMax = 0;
        int minSum = nums[0];
        int curMin = 0;
        for (int x : nums) {
            curMax = max(curMax + x, x);
            maxSum = max(maxSum, curMax);
            curMin = min(curMin + x, x);
            minSum = min(minSum, curMin);
            total += x;
        }
        return maxSum > 0 ? max(maxSum, total - minSum) : maxSum;
    }
};