class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<int> ans(n);
        ans[n-1] = prices[n-1];
        for(int i = n - 2; i >= 0; i--){
            ans[i] = max(prices[i+1],ans[i+1]);
        }
        int res = 0;
        for(int i = 0; i < n; i++){
            res = max(res, ans[i] - prices[i]);
        }
        return res;
    }
};