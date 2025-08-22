class Solution {
public:
   int maxSubArray(vector<int>& nums)
{
    
    int cs = nums[0], ms = nums[0];

    for (size_t i = 1; i < nums.size(); i++)
    {
        cs = max(nums[i], nums[i] + cs);
        ms = max(cs, ms);

    }
    
    return ms;

}
};