class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long res=0;
        long long currwinsum=0;

        unordered_set<int> st;

        int i=0;
        int j=0;

        while(j<nums.size())
        {
          //it is used to erase duplicate element
            while(st.count(nums[j]))
            {
                currwinsum-=nums[i];
                st.erase(nums[i]);
                i++;
            }

            currwinsum+=nums[j];
            st.insert(nums[j]);

            if(j-i+1==k)
            {
                res=max(res,currwinsum);

                currwinsum-=nums[i];
                st.erase(nums[i]);
                i++;
            }
            j++;
        }
        return res;
    }
};
