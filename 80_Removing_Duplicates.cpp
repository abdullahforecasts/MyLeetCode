class Solution {
public:
    int removeDuplicates(vector<int>& nums)
{
    for (size_t i = 0; i < nums.size(); i++)
    {
        if (i ==0 || i == nums.size()-1)
        {
            continue;
        }
        int nm = nums[i];

        if (nm== nums[i-1] && nm == nums[i+1])
        {
            nums.erase(nums.begin() + i);
            i--;
        }
    }


    return nums.size();
}
};