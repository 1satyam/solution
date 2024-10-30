class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> mymap;
        for(int i=0;i<nums.size();i++)
        {
            if(mymap.find(nums[i])!=mymap.end())
               mymap[nums[i]]++;
            else
               mymap[nums[i]]=1;
        }
        for(auto it:mymap)
        {
            if(it.second==1)
              return it.first;
        }
        return 0;
    }
};

/** 
          without if-else
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> mymap;
        for(int i=0;i<nums.size();i++)
        {
            mymap[nums[i]]++;
        }
        for(auto it:mymap)
        {
            if(it.second==1)
              return it.first;
        }
        return 0;
    }
  };
**/
