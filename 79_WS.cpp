class Solution {
public:

    struct pos {
        int x, y, w; 
    };

    bool dfs(int x, int y, vector<vector<char>>& board, string word, int idx) {
        int m = board.size(), n = board[0].size();
        if (x < 0 || y< 0 || x >= m || y >= n|| board[x][y] != word[idx])return false;

        if (idx == word.size()-1)
        {
            return true;
        }
        char temp = board[x][y];
        board[x][y] = '#';

        bool found = dfs(x + 1, y, board, word, idx + 1) || dfs(x - 1, y, board, word, idx + 1) || dfs(x , y+1, board, word, idx + 1) || dfs(x , y-1, board, word, idx + 1);

        board[x][y] = temp;

        return found;
    }


    bool exist(vector<vector<char>>& board, string word) {

        if (word.size() ==0)
        {
            return false;
        }

        for (size_t i = 0; i < board.size(); i++) {
            for (size_t j = 0; j < board[i].size(); j++) {
                if (board[i][j] == word[0]) {
                    if (dfs(i, j, board, word,0)) {
                        return true;
                    }
                }
            }
        }
        return false;
    }
};