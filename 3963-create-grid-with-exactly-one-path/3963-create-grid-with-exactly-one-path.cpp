class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<vector<char>> grid(m, vector<char> (n,0));
        for(int i=0;i<m;i++) {
            grid[i][0] = '.';
        }
        for(int i=0;i<n;i++) {
            grid[m-1][i] = '.';
        }
        for(int i=0;i<m;i++) {
            for(int j=0;j<n;j++) {
                if(grid[i][j] == 0) grid[i][j] = '#';
            }
        }
        vector<string> ans;
        for(int i=0;i<m;i++) {
            ans.push_back(string(grid[i].begin(), grid[i].end()));
        }
        return ans;
    }
};