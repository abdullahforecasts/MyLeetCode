class Solution {
public:
  vector<int> findMissingAndRepeatedValues(vector<vector<int>> &grid)
{
vector<int> rs(2,0);
int nn = grid.size()*grid.size();
vector<int>tracker(nn,0);

for (size_t i = 0; i < grid.size(); i++)
{
    for (size_t j = 0; j < grid[i].size(); j++)
    {
        
      int n = grid[i][j];
      tracker[n-1] +=1;
      
    }
    
}

for (size_t i = 0; i < tracker.size(); i++)
{
   
    if (tracker[i]== 0)
    {
        rs[1] =i+1;
    }else if (tracker[i]== 2)
    {
        rs[0] = i+1;
    }
    
    
}
return rs;

}
};