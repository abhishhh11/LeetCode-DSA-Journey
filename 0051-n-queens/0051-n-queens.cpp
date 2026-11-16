class Solution {
public:
    vector<vector<char>> grid;
    vector<vector<string>> result;
    bool canbeplaced(int row, int col, int n) {
        // check for the column
        for (int i = row - 1; i >= 0; i--) {
            if (grid[i][col] == 'Q')
                return false;
        }

        // check for left diagonal
        for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--) {
            if (grid[i][j] == 'Q')
                return false;
        }

        // check for right diagonal
        for (int i = row - 1, j = col + 1; i >= 0 && j < n; i--, j++) {
            if (grid[i][j] == 'Q')
                return false;
        }

        return true;
    }
    void f(int row, int n) {
        if (row == n) {
            vector<string> temp;
            for (int i = 0; i < n; i++) {
                string res = "";
                for (int j = 0; j < n; j++) {
                    res += grid[i][j];
                }
                temp.push_back(res);
            }
            result.push_back(temp);
            return;
        }
        for (int col = 0; col < n; col++) {
            if (canbeplaced(row, col, n)) {
                grid[row][col] = 'Q';
                f(row + 1, n);
                grid[row][col] = '.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        grid.clear();
        result.clear();
        grid.resize(n, vector<char>(n, '.'));
        f(0, n);
        return result;
    }
};