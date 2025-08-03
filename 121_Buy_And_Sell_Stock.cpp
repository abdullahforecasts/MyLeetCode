class Solution {
public:
   

int maxProfit(vector<int>& prices) 
{
  
    int mini = INT_MAX;
    int prof = 0;

    for (size_t i = 0; i < prices.size(); i++)
    {

        if (prices[i]<mini)
        {
            mini = prices[i];
        }
        else
        {
            prof = max(prof, prices[i] - mini);
        }

    }

    return prof;
}

};