class Solution {
public:
   int climbStairs(int n) {
    if (n <= 1)return n;

    vector<int>nums; nums.push_back(0); nums.push_back(1);
    int steps = 0;
    for (int i = 2; i < n; i++)
    {
        int n = nums[i - 1] + nums[i - 2];
        steps += n;
        nums.push_back(n);

    }

    return steps+2;

}
};