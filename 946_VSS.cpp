class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped)
{

    stack<int>helper;
    int ptr = 0;

    for (int i = 0; i < pushed.size(); i++)
    {


        int num = pushed[i];

            helper.push(num);

            while (!helper.empty() && ptr < popped.size() && helper.top() == popped[ptr])
            {
                helper.pop();
                ptr++;
            }


       
    }
    return helper.empty();
} 
};