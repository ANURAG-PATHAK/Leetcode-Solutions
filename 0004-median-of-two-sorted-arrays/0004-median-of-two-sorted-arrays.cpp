class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
    
     int n1 = nums1.size();
     int n2 = nums2.size();
        
        if (n1 < n2) {
            return findMedianSortedArrays(nums2, nums1);
        }

        int low = 0;
        int high = n2 * 2;
        
        double ans;
        
        while (low <= high) {

            int mid2 = (low + high) / 2;   
               int mid1 = n1 + n2 - mid2;


            double left1 = (mid1 == 0) ? INT_MIN : nums1[(mid1-1)/2];
            double left2 = (mid2 == 0) ? INT_MIN : nums2[(mid2-1)/2];
            double right1 = (mid1 == n1 * 2) ? INT_MAX : nums1[(mid1)/2];
            double right2 = (mid2 == n2 * 2) ? INT_MAX : nums2[(mid2)/2];
            

        if (left1 > right2){
            low = mid2 + 1;
        }
        else if (left2 > right1){
            high = mid2 - 1;	
        }
        else {
            return (max(left1,left2) + min(right1, right2)) / 2;	
        }
    }
    return -1;
        
    }
};
    
    
    
    
    
    
    
    
    
    
    
    
    