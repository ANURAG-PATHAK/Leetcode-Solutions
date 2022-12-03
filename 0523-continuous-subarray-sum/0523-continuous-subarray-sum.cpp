class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> ump{{0,0}};
        int sum = 0;
        for(int i = 0; i < nums.size(); i++){
            sum += nums[i];
            if(!ump.count(sum % k)){
                ump[sum % k] = i + 1;
            }
            else if(ump[sum % k] < i){
                return true;
            }
        }
        return false;
    }
};