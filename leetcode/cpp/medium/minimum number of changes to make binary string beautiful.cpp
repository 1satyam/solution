class Solution {
public:
    int minChanges(string s) {
        int count=0;
        char ch=s[0];
        int change=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==ch)
            {
                count++;
                continue;
            }
          //current s[i] is not equl to ch
            if(count%2==0)
            {
                count=1;//to make new substring
            }
            else
            {
                change+=1;
                count=0;
            }
            ch=s[i];
        }
        return change;
    }
};
