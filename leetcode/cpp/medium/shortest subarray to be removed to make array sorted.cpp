class Solution {
public:
    int findLengthOfShortestSubarray(vector<int>& arr) {
        int j=arr.size()-1;
      // finding shortest subarray starting index from right 
        while(j>0 && arr[j]>=arr[j-1])
        {
            j--;
        }

        int i=0;
      // removing all the elements from left to index j because j to index arr.size()-1 is sorted
        int res=j;
        while(i<j && (i==0 ||arr[i]>=arr[i-1]))
        {
            while(j<arr.size()&& arr[i]>arr[j])
            {
                j++;
            }
            //updating minimum length of array to remove to make sorted array
            res=min(res,j-i-1);
          // increasing if arr[i]<=arr[j]
            i++;
        }
        return res;
    }
};
