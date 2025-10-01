class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums)
{
    vector<int>pre(nums.size(), 1);
    vector<int>post(nums.size(), 1);
    int li = nums.size() - 1;
    //1 2 3 4 

    for (int i = 1; i <= li; i++)
    {
        pre[i] = nums[i - 1] * pre[i-1];
       
    }

    for (int i = li-1; i >=0; i--)
    {
        post[i] = nums[i + 1] * post[i + 1];
    }

    for (int i = 0; i < post.size(); i++)
    {
        post[i] = post[i] * pre[i];
    }

    return post;
}
};