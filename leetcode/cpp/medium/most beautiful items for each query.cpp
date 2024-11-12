class Solution {
public:
    int binarysearch(vector<vector<int>>& items, int queryprice)
    {
        int l=0;
        int h=items.size()-1;
        int mid;
        int maxbeauty=0;
        while(l<=h)
        {
            mid=l+(h-l)/2;
            if(items[mid][0]>queryprice)
            {
                h=mid-1;
            }
            else
            {
                maxbeauty=max(maxbeauty,items[mid][1]);
                l=mid+1;
            }
        }
        return maxbeauty;
    }

    vector<int> maximumBeauty(vector<vector<int>>& items, vector<int>& queries) {
        vector<int> result(queries.size());//same length as queries

        //sort the array based on price in increasing order
        sort(begin(items),end(items));
        int maxbeautyseen=items[0][1];
        
        for(int i=1;i<items.size();i++)
        {
            maxbeautyseen=max(maxbeautyseen,items[i][1]);
            items[i][1]=maxbeautyseen;
        }

        for(int i=0;i<queries.size();i++)
        {
            int queryprice=queries[i];
            result[i]=binarysearch(items,queryprice);
        }
        return result;    
    }
};
