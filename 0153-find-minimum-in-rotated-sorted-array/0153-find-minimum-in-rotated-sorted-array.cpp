class Solution {
public:
    int findMin(vector<int>& nums) {
        int low = 0;
        int high = nums.size()-1;
        if(nums.size() == 1){
            return nums[0];
        }
        int n = nums.size();
        int mid;
        while(low <= high){
            mid = low + (high - low) / 2;
            if(nums[mid]<nums[(mid-1+n)%n] && nums[mid]<nums[(mid+1)%n]){
                return nums[mid];
            }else if(nums[low]<nums[mid]){
                if(nums[low]>nums[high]){
                    low = (mid+1)%n;
                }else{
                    high = (mid-1+n)%n;
                }
            }else{
                if(nums[mid]>nums[high]){
                    low = (mid+1)%n;
                }else{
                    high = (mid-1+n)%n;
                }
            }
        }
        return -1;
    }
};
