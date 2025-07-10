class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> dq;  
        vector<int> res;

        //1st slide 
        for (size_t i = 0; i < k; i++)
        {
            while (!dq.empty()&& nums[dq.back()]<= nums[i])
            {
                dq.pop_back();
            }
            dq.push_back(i);
        }

        for (size_t i = k; i < nums.size(); i++)
        {
            res.push_back(nums[dq.front()]);

            //removal of outdated elements
            while (!dq.empty() && dq.front()<= i-k)
            {
                dq.pop_front();
            }

            //new window making by removal of small elements 
            while (!dq.empty() && nums[dq.back()] <= nums[i])
            {
                dq.pop_back();
            }
            dq.push_back(i);
        }
        res.push_back(nums[dq.front()]);
        return res;
    }
};