class Solution {
public:
    string makeFancyString(string s) {
        string result;
        result.push_back(s[0]);
        int freq=1;
        for( int i=1;i<s.length();i++)
        {
            if(s[i]==result.back())
            {
               freq++;
               if(freq<3)
                   result.push_back(s[i]);
            }
            else
            {
                result.push_back(s[i]);
                freq=1;
            }
        }
        return result;
    }
};
