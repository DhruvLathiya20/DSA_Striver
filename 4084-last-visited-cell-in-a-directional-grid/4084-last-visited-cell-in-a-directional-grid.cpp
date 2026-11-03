class Solution {
public:
    vector<int> lastVisitedCell(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int cellX = 0;
        int cellY = 0;

        while (true) {
            char rotate = grid[cellX][cellY];
            grid[cellX][cellY] = 'x';

            int x = cellX;
            int y = cellY;

            if (rotate == 'L') {
                y--;
            } else if (rotate == 'R') {
                y++;
            } else if (rotate == 'U') {
                x--;
            } else if(rotate == 'D') {
                x++;
            }

            if (x < 0 || x >= n || y < 0 || y >= m || grid[x][y] == 'x') {
                break;
            }
            cellX = x;
            cellY = y;
        }

        return {cellX, cellY};
    }
};