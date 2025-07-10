class Solution {
public:
   struct Point {
    int r, c;
};

void exploreIsland(vector<vector<char>>& grid, int rows, int cols, int startR, int startC) {
    stack<Point> s;
    s.push({ startR, startC });
    grid[startR][startC] = 'i';

    while (!s.empty()) {
        Point cell = s.top();
        s.pop();

        int r = cell.r;
        int c = cell.c;

        if (c + 1 < cols && grid[r][c + 1] == '1') {
            grid[r][c + 1] = 'i';
            s.push({ r, c + 1 });
        }
        if (r + 1 < rows && grid[r + 1][c] == '1') {
            grid[r + 1][c] = 'i';
            s.push({ r + 1, c });
        }
        if (c - 1 >= 0 && grid[r][c - 1] == '1') {
            grid[r][c - 1] = 'i';
            s.push({ r, c - 1 });
        }
        if (r - 1 >= 0 && grid[r - 1][c] == '1') {
            grid[r - 1][c] = 'i';
            s.push({ r - 1, c });
        }
    }
}

int numIslands(vector<vector<char>>& grid) {
    if (grid.empty()) return 0;

    int rows = grid.size();
    int cols = grid[0].size();
    int count = 0;

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (grid[i][j] == '1') {
                exploreIsland(grid, rows, cols, i, j);
                count++;
            }
        }
    }

    return count;
}
};