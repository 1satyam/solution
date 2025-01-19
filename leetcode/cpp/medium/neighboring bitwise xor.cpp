class Solution {
public:
    bool doesValidArrayExist(vector<int>& derived) {
        int Xor=0;
        for(int i=0;i<derived.size();i++)
        {
            Xor^=derived[i];
        }
        return Xor==0;
    }
};
