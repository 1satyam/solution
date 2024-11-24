class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        int n=matrix.size(); //it is a n*n matrix

        long long sum=0;
        int smallabsvalue=INT_MAX;//smallest absolute value
        int countneg=0;

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                sum+=abs(matrix[i][j]);//sum of all the  absolute value of element of matrix

                if(matrix[i][j]<0)
                {
                    countneg++;
                }
                // to find smallest absolute value
                smallabsvalue=min(smallabsvalue,abs(matrix[i][j]));
            }
        }
        if(countneg%2==0)
        {
           return sum;  
        }

        return sum-2*smallabsvalue;

    }
};
