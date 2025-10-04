class Solution {
public:

void  dfsBacktrack( vector<int>&current,vector<int>& nums,vector<vector<int>>&result)
{

if(current.size() == nums.size() )
{
result.push_back(current);
return;
}

for(int i =0 ; i < nums.size(); i ++)
{

bool used = false;

for(int &x:current)
{

    if(x == nums[i])used = true;
}

if(used)continue;

current.push_back(nums[i]);
dfsBacktrack(current,nums,result);
current.pop_back();


}




}


    vector<vector<int>> permute(vector<int>& nums) 
    {
        vector<vector<int>>result;
        vector<int>current;

      dfsBacktrack(current,nums,result);

        return result;
    }
};