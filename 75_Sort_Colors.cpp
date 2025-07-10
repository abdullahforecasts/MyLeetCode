class Solution {
public:
   void sortColors(vector<int>& nums) {
	int rows = nums.size();
	for (int i = 0; i < rows-1; i++)
	{
		for (int j = i+1; j < rows; j++)
		{
			if (nums[i]>nums[j])
			{
				swap(nums[i], nums[j]);
			}
		}
	}

}
};