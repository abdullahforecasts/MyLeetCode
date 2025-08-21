class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) 
{
    vector<int>Count;

    for (size_t i = 0; i < nums.size(); i++)
    {
        int nm = nums[i];
        int ct = 0;

        for (size_t j = 0; j < nums.size(); j++)
        {

            if (nums[j]< nm)
            {
                ct++;
            }

        }

        Count.push_back(ct);
    }

    return Count;
}
};