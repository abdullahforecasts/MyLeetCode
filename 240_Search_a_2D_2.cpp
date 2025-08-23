class Solution {
public:
   bool searchMatrix(vector<vector<int>>& matrix, int target) 
{
    
    int row = 0, col = matrix[0].size()-1;
    while (row>=0 and row < matrix.size() and col >=0 and col <matrix[0].size())
    {
        int nm = matrix[row][col];
        if (nm == target)
        {
            return true;
        }
        else if (nm > target)
        {
            col--;
        }
        else if (nm < target)
        {
            row++;
        }

    }


    return false;;
}
};