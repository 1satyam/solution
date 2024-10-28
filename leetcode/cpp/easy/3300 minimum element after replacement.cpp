class Solution {
public:
    int minElement(vector<int>& nums) {
        int rem;
        int min_key;
        vector<int>ans;
        for(int i=0;i<nums.size();i++)
        {
            rem=0;
            while(nums[i]>0)
            {
                rem+=nums[i]%10;
                nums[i]/=10;
            }
            ans.push_back(rem);
        }

        min_key=ans[0];
        for(int i=1;i<ans.size();i++)
        {
            if(min_key>ans[i])
               min_key=ans[i];
        } 
        return min_key;
    }
};
