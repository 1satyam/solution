class Solution {
public:
    bool isValid(string s) {
        vector<char> c;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='(')
              c.push_back(')');
            else if(s[i]=='{')
               c.push_back('}');
            else if(s[i]=='[')
               c.push_back(']');
            else 
            {
               if(c.empty() || c.back()!=s[i])
                   return false;
                c.pop_back();
            }        
        }
        return c.empty();  
    }
};
