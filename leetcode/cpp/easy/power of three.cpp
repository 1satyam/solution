class Solution {
public:
    bool isPowerOfThree(int n){
        double result;
        if(n<=0)
          return false;
        else
        {
          // use of change of base formula to get log3(n)
           result=log10(n)/log10(3);
        }
        return floor(result)==result;//to check log3(n) is integer  
    }
};
