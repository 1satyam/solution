class Solution {
public:
   int findleftmost(vector<int>& nums,int target)
   {
        int low=0;
        int mid;
        int leftmost=-1;
        int high=(nums.size())-1;
        while(low<=high)
        {
            mid=(low+high)/2;
            if(nums[mid]==target)
            {
                leftmost=mid;
                high=mid-1;
            }
            else if(target>nums[mid])
                 low=mid+1;
            else
                high=mid-1;
        }
        return leftmost;
   };

   int findrightmost(vector<int>& nums,int target)
   {
        int low=0;
        int mid;
        int rightmost=-1;
        int high=(nums.size())-1;
        while(low<=high)
        {
            mid=(low+high)/2;
            if(nums[mid]==target)
            {
                rightmost=mid;
                low=mid+1;
            }
            else if(target>nums[mid])
                 low=mid+1;
            else
                high=mid-1;
        }
        return rightmost;
   };

    vector<int> searchRange(vector<int>& nums, int target) {

        int leftmost=findleftmost(nums,target);
        int rightmost=findrightmost(nums,target);
        return {leftmost,rightmost};
        
    }
};
