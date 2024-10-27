class Solution {
public:
    double myPow(double x, int n) {
        int m=abs(n);
        double ans=1;
        while(m>0)
        {
            if(m%2==1)
            {
                ans*=x;
                m-=1;
            }
            else
            {
                m=m/2;
                x*=x;
            }
        }
        if(n<0)
        {
            return 1/ans;
        }
        return ans;    
    }
};
