class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int sum = 0;
        int res = 0;
        unordered_map<int,int> ump;
        for(int i = 0; i < nums.size(); i++){
            sum += nums[i];
            if(sum == k){
                res++;
            }
            if(ump[sum - k]){
                res += ump[sum - k];
            }
            ump[sum]++;
        }
        return res;
    }
};