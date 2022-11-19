class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() - 1;
        if(nums.size() == 1){
            if(nums[0] == target) return true;
            else return false;
        }
        while(low <= high){
            int mid = low + (high - low) / 2;
            if(nums[mid] == target){
                return true;
            }
            if((nums[low] == nums[mid]) and (nums[high] == nums[mid]))
            {
                low++;
                high--;
            }
            else if(nums[mid] >= nums[low]){
                if(nums[mid] > target and target >= nums[low]){  
                    high = mid - 1;
                    
                }
                else{
                    low = mid + 1;
                }
            }
            else{
                if(target <= nums[high] and nums[mid] < target ){
                    low = mid + 1;
                }
                else{
                    high = mid - 1;
                    
                }
            }
        }
        return false;
    }
};