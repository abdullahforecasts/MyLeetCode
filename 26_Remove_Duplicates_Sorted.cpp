class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
{
    
    for (size_t i = 0; i < nums.size()-1; i++)
    {
        int nm = nums[i];
        if (nm == nums[i+1])
        {
            nums.erase(nums.begin() + i + 1);
            i--;
        }

    }
   return nums.size();
}
};