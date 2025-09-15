class Solution {
public:

int threeSumClosest(vector<int>& nums, int target)
{

    int sum = 0;
    int min_diff = INT_MAX;
   

    sort(nums.begin(), nums.end());

    int res_sum = nums[0] + nums[1] + nums[2];

    for (int i = 0; i < nums.size() - 2; i++)
    {

        int n = nums[i];

        int left = i + 1, right = nums.size() - 1;

        while (left < right)
        {

            sum = n + nums[left] + nums[right];

            if (sum == target)return sum;
            else if (sum < target) left++;
            else if (sum > target)right--;



            int curr_diff = abs(sum - target);

            if (curr_diff < min_diff)
            {

                min_diff = curr_diff;
                res_sum = sum;

            }

        }

    }


    return res_sum;

}

};