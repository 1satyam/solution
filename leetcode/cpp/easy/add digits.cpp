class Solution {
public:
    int addDigits(int num) {
        if(num==0)
            return 0;
        return (num%9==0)?9:num%9;
    }
};

// let 456 is the number .it can be written as 4*100 +5*10 +6
//if 10^n is divided by 9 there is always be a remainder 1
//so 4*(100%9)+5*(10%9) +6 = 4*1 +5*1 +6
//the digit sum 4+5+6=6 which is equal to 456%9=6
