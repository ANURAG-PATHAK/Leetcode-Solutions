class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int ans = INT_MAX;
       for(int i = 0; i < nums.size() - 2; i++){
           int low = i + 1;
           int high = nums.size() - 1;
           while(low < high){
               int s = nums[i] + nums[low] + nums[high];
               if(abs(target - s) < abs(ans)){
                   ans = target - s;
               }
               if(s < target){
                   low ++;
               }
               else{
                   high--;
               }
           }
       }
        return target - ans;
    }
};