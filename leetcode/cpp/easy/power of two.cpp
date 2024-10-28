class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0)
          return false;
      // to check if log2(n) is an integer 
        return floor(log2(n))==ceil(log2(n));    
    }
};
