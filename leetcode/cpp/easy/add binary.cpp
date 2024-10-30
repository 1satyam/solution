class Solution {
public:
    string addBinary(string a, string b) {
        int carry=0;
        string c;
        int l1=a.size()-1;
        int l2=b.size()-1;
        while(l1>=0 || l2>=0 ||carry>0)
        {
            int sum=carry;
            if(l1>=0) //to check if one string is greater than other
              sum+=a[l1--]-'0';// -'0' to convert character digit to integer
            if(l2>=0) //to check if one string is greater than other
              sum+=b[l2--]-'0'; // -'0' to convert charcter digit to integer
            c.push_back((sum%2 +'0')); // -'0' to convert integer to charcter digit
            carry=sum/2; 
        }
        reverse(c.begin(),c.end());
        return c;  
    }
};
