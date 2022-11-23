class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
       int N1 = nums1.size();
    int N2 = nums2.size();
    if (N1 < N2) return findMedianSortedArrays(nums2, nums1);	// Make sure A2 is the shorter one.
    
    int lo = 0, hi = N2 * 2;
    while (lo <= hi) {
        int mid2 = (lo + hi) / 2;   // Try Cut 2 
        int mid1 = N1 + N2 - mid2;  // Calculate Cut 1 accordingly
        
        double L1 = (mid1 == 0) ? INT_MIN : nums1[(mid1-1)/2];	// Get L1, R1, L2, R2 respectively
        double L2 = (mid2 == 0) ? INT_MIN : nums2[(mid2-1)/2];
        double R1 = (mid1 == N1 * 2) ? INT_MAX : nums1[(mid1)/2];
        double R2 = (mid2 == N2 * 2) ? INT_MAX : nums2[(mid2)/2];
        
        if (L1 > R2) lo = mid2 + 1;		// A1's lower half is too big; need to move C1 left (C2 right)
        else if (L2 > R1) hi = mid2 - 1;	// A2's lower half too big; need to move C2 left.
        else return (max(L1,L2) + min(R1, R2)) / 2;	// Otherwise, that's the right cut.
    }
    return -1;
    }
};
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
//      int n = nums1.size();
//         int m = nums2.size();
        
//         if (m > n) {
//             vector<int> temp;
//             temp = nums2;
//             nums2 = nums1;
//             nums1 = temp;
//         }

//         int low = 0;
//         int high = m * 2;
        
//         double ans;
        
//         while (low <= high) {
            
//             int mid1 = low + (high - low) / 2;
//             int mid2 = n + m - mid1;
//             double left1 = (mid2 == 0) ? INT_MIN : nums1[(mid2-1)/2];
//             double left2 = (mid1 == 0) ? INT_MIN : nums2[(mid1-1)/2];
//             double right1 = (mid2 == n * 2) ? INT_MAX : nums1[(mid2)/2];
//             double right2 = (mid1 == m * 2) ? INT_MAX : nums2[(mid1)/2];
            
        
        
//         if (left1 > right2){
//             low = mid1 + 1;
//         }
//         else if (left2 > right1){
//             high = mid2 - 1;	
//         }
//         else {
//             return (max(left1,left2) + min(right1, right2)) / 2;	
//         }
//     }
//     return -1;
//     }