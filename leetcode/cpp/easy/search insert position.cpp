class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low=0;
        int mid;
        int high=(nums.size())-1;
        while(low<=high)
        {
            mid=(low+high)/2;
            if(nums[mid]==target)
                return mid;
            else if(target>nums[mid])
                 low=mid+1;
            else
                high=mid-1;
        }
      //because low =mid+1 and it is the position that we need in case target>nums[mid]
        return low;
    }
};
