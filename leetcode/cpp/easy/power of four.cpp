class Solution {
public:
    bool isPowerOfFour(int n) {
        double result;
        if(n<=0)
          return false;
        else
        {
          //used change of base formula to get log4(n)
            result=log10(n)/log10(4);
        }
        return floor(result)==result;//to check log4(n) is integer
    }
};
