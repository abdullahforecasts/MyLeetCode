class Solution {
public:
    int firstMissingPositive(vector<int>& nums) 
{
    
    vector<int>ct(nums.size(), 0);

    for (size_t i = 0; i < nums.size(); i++)
    {
        int nm = nums[i];
        if (nm <=0)
        {
            continue;
        }
        else if(nm <=nums.size())
        {
            ct[nm - 1] = 1;
        }
    }

    for (size_t i = 0; i < ct.size(); i++)
    {
        int nm = ct[i];

        if (nm != 1)
        {
            return i + 1;
        }

    }

    return nums.size()+1;
}
};