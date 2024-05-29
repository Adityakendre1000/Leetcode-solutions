class Solution {
public:
     double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        double median;
        
        if (n1 > n2) {
            return findMedianSortedArrays(nums2, nums1);
        }
        
        int left = 0, right = n1;
        int medianPos = (n1 + n2 + 1) / 2;
        
        while (left <= right) {
            int partition1 = (left + right) / 2;
            int partition2 = medianPos - partition1;
            
            int maxLeft1 = (partition1 == 0) ? INT_MIN : nums1[partition1 - 1];
            int minRight1 = (partition1 == n1) ? INT_MAX : nums1[partition1];
            
            int maxLeft2 = (partition2 == 0) ? INT_MIN : nums2[partition2 - 1];
            int minRight2 = (partition2 == n2) ? INT_MAX : nums2[partition2];
            
            if (maxLeft1 <= minRight2 && maxLeft2 <= minRight1) {
                if ((n1 + n2) % 2 == 0) {
                    return (double)(max(maxLeft1, maxLeft2) + min(minRight1, minRight2)) / 2;
                } else {
                    return median = (double)max(maxLeft1, maxLeft2);
                }
            } else if (maxLeft1 > minRight2) {
                right = partition1 - 1;
            } else {
                left = partition1 + 1;
            }
        }
         return median;
    }
        
};
