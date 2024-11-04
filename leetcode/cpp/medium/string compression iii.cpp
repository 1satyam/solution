class Solution {
public:
    string compressedString(string word) {
        string comp="";
        int i=0;
        while(i<word.length())
        {
            char ch=word[i];
            int count=0;
            while(word[i]==ch && count<9)
            {
                count++;
                i++;
            }
            comp+=to_string(count)+ch;
        }
       return comp;
    }
};
