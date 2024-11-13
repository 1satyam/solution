class Solution {
public:
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        long long res=0;
        sort(begin(nums),end(nums));
        for(int i=0;i<nums.size();i++)
        {
           // gives lower bound index of lower-nums[i]
            int lo_bound_idx=lower_bound(begin(nums)+i+1,end(nums),lower-nums[i])-begin(nums);
            int lo=lo_bound_idx-1-i;
           // gives upper bound index of upper -nums[i]
            int up_bound_idx=upper_bound(begin(nums)+i+1,end(nums),upper-nums[i])-begin(nums);
            int up=up_bound_idx-1-i;

            res+=(up-lo);
  
        }
      return res;  
    }
};
