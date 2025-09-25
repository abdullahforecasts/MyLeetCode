class Solution {
public:
   struct cords
{
    int x, y;
};

void turnN(vector<vector<char>>& grid, int i, int j) {
    int rows = grid.size(), cols = grid[0].size();
    queue<cords> helper;
    helper.push({ i, j });
    grid[i][j] = 'v';  

    while (!helper.empty()) {
        int x = helper.front().x, y = helper.front().y;
        helper.pop();

        if (x - 1 >= 0 && grid[x - 1][y] == '1') {
            grid[x - 1][y] = 'v';
            helper.push({ x - 1, y });
        }
        if (x + 1 < rows && grid[x + 1][y] == '1') {
            grid[x + 1][y] = 'v';
            helper.push({ x + 1, y });
        }
        if (y - 1 >= 0 && grid[x][y - 1] == '1') {
            grid[x][y - 1] = 'v';
            helper.push({ x, y - 1 });
        }
        if (y + 1 < cols && grid[x][y + 1] == '1') {
            grid[x][y + 1] = 'v';
            helper.push({ x, y + 1 });
        }
    }
}

int numIslands(vector<vector<char>>& grid) 
{
    int NOI = 0;
   
    int i = 0; int j = 0;
    int maxi = grid.size()-1, maxy = grid[0].size()-1;
   
    for (int  i = 0; i <= maxi; i++)
    {
        for (int j = 0; j <= maxy ; j++)
        {
            char n = grid[i][j];
            if (n == '1')
            {
                NOI++;
                turnN(grid, i, j);
            }


        }
    }

  


    return NOI;
}

};