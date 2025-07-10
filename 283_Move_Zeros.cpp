class Solution {
public:
   void moveZeroes(vector<int>& nums) 
{
	vector<int>temp;

	int zeroCount = 0;
	for (int i = 0; i < nums.size(); i++)
	{
		if (nums[i]== 0)
		{
			zeroCount++;
		}
		else
		{
			temp.push_back(nums[i]);
		}
	}
	for (int i = 0; i < zeroCount; i++)
	{
		temp.push_back(0);
	}
	nums = temp;

}
};