class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size();
        int n=nums2.size();
        int result=0;

        if(m%2!=0) //whem m is odd
        {
            for(int i=0;i<nums2.size();i++)
            {
                result^=nums2[i];
            }
        }

        if(n%2!=0) // when n is odd
        {
            for(int i=0;i<nums1.size();i++)
            {
                result^=nums1[i];
            }
        }

        return result;
    }
};
