class Solution {
public:
 int singleNumber(vector<int>& nums)
{
    int n = -1;
    sort(nums.begin(), nums.end());


  //  print(nums);
    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i - 1] == nums[i])
        {
            nums[i - 1] = -1;
            nums[i] = -1;
        }

    }
 //   print(nums);
    for (size_t i = 0; i < nums.size(); i++)
    {
        if (nums[i] != -1)
        {
            return nums[i];
        }
    }

    return n;
}

};