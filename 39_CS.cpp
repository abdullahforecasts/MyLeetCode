class Solution {
public:

    void MakeComb(vector<vector<int>>& result, vector<int>& candidates, vector<int>& curr,int &target, int &sum, int idx)
    {
        if (idx>= candidates.size())
        {
            return;
        }
        if (sum > target) return;
       

        if (sum<= target)
        {
            sum += candidates[idx];
            curr.push_back(candidates[idx]);

        }

        if (sum == target)
        {
            result.push_back(curr);
            sum -= candidates[idx]; 
            curr.pop_back();         
            return;
        }

        MakeComb(result, candidates, curr, target, sum, idx);
        sum -= candidates[idx];
        curr.pop_back();
        MakeComb(result, candidates, curr, target, sum, idx + 1);

        

    }


    vector<vector<int>> combinationSum(vector<int>& candidates, int target) 
    {
        vector<vector<int>>result;
        vector<int>curr;
        int sum = 0;
        int idx = 0;
       sort(candidates.begin(), candidates.end());
        MakeComb(result, candidates, curr,target, sum, idx);
        return result;
    }

};