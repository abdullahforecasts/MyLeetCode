class Solution {
public:
   int orangesRotting(vector<vector<int>>& grid)
{
    int m = 0;
    bool turn = false;
    int rows = grid.size();
    int cols = grid[0].size();

    while (true) {
        turn = false;
        vector<vector<int>> temp = grid;  

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (grid[i][j] == 2) {
                    if (i - 1 >= 0 && grid[i - 1][j] == 1) {
                        temp[i - 1][j] = 2;
                        turn = true;
                    }
                    if (i + 1 < rows && grid[i + 1][j] == 1) {
                        temp[i + 1][j] = 2;
                        turn = true;
                    }
                    if (j - 1 >= 0 && grid[i][j - 1] == 1) {
                        temp[i][j - 1] = 2;
                        turn = true;
                    }
                    if (j + 1 < cols && grid[i][j + 1] == 1) {
                        temp[i][j + 1] = 2;
                        turn = true;
                    }
                }
            }
        }

        if (!turn) break;  // If no fresh oranges turned rotten, stop
        grid = temp;  // Update grid after full pass
        m++;
         


        
    }

for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
        if (grid[i][j] == 1) return -1;
    }
}


    return m;
}

};