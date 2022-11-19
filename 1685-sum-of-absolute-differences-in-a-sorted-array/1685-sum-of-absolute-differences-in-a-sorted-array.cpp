class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int sum = accumulate(nums.begin(), nums.end(), 0);
        int s = sum;
        vector<int> ans;
        for(int i = 0; i < nums.size(); i++){
            int x = sum - (nums[i] * (nums.size() - i)) - (s - sum) + (nums[i] * i);
            sum -= nums[i];
            ans.push_back(x);
        }
        for(auto x : ans){
            cout << x << " ";
        }
        cout << endl;
        return ans;
    }
};