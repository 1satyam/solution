class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> stack;
        int sum=0;
        for(int i=0;i<operations.size();i++)
        {
            if(operations[i]=="+")
            {
                int last=stack.back();// back() is used instead top() because of vector<int> stack
                int secondlast=stack[stack.size()-2];//stack does not support index
                stack.push_back(last+secondlast);
            }
            else if(operations[i]=="C")
                stack.pop_back();//pop-back() is used due to vector<int> stack
            else if(operations[i]=="D")
               stack.push_back(stack.back()*2);
            else
                stack.push_back(stoi(operations[i]));// to convert string into integer 
        }
        for(auto i:stack)
           sum+=i;
        return sum;    
    }
};
