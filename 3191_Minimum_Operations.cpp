class Solution {
public:
 int minOperations(std::vector<int>& nums) 
{
    int count = 0;
    int indx = 0;

    while (true)
    {
        while (indx < nums.size() && nums[indx] != 0) {
            indx++;
        }

        if (indx == nums.size()) break;
        if (indx >= nums.size() - 2) return -1;

        count++;

        for (int i = indx; i < nums.size() && i <= indx + 2; i++) {
            nums[i] = 1 - nums[i];
        }
    }

    return count;
}
};