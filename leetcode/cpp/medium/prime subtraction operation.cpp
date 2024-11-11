class Solution {
public:
    bool isprime[1000];
    void sieve()
    {
        fill(isprime,isprime+1000,true);//initialize the array isprime all true;
        isprime[0]=false;// 0 is not prime number
        isprime[1]=false;// 1 is not prime number

        for(int i=2;i*i<1000;i++)
        {
            if(isprime[i]==true)
            {
                for(int j=i*i;j<1000;j+=i)
                {
                    isprime[j]=false;
                }
            }
        }
    }
    bool primeSubOperation(vector<int>& nums) {
        sieve();
        for(int i=nums.size()-2;i>=0;i--)
        {
            if(nums[i]<nums[i+1])
                continue;
            //if nums[i]>=num[i+1]
            for(int p=2;p<nums[i];p++)
            {
                if(!isprime[p])
                   continue;
                if(nums[i]-p<nums[i+1])
                {
                    nums[i]-=p;
                    break;
                }
            }
            if(nums[i]>=nums[i+1])
              return false;
        }
      return true;  
    }
};

// Sieve of Eratosthenes is a method to find prime number for any given limit
