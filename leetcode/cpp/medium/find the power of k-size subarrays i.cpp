class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        vector<int> res;
        for(int i=0;i<=nums.size()-k;i++)
        {
            int pow=nums[i];
            for(int j=i+1;j<i+k;j++)
            {
                if(nums[j]==nums[j-1]+1)
                {
                    pow=nums[j];
                }
                else
                {
                    pow=-1;
                    break;
                }
            }
            res.push_back(pow);
        }
       return res; 
    }
};
