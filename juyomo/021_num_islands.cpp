// Author: Juyoung Moon
// https://leetcode.com/problems/number-of-islands/ (submission #7)

// HOCO Mentoring HW
// https://github.com/juyomo/hoco-mentoring

class Solution {
private:
    int drs[4] = {-1,0,1,0};
    int dcs[4] = {0,1,0,-1};
    struct pair_hash {
        inline std::size_t operator()(const std::pair<int,int> & v) const {
            return v.first*31+v.second;
        }
    };
    
    void removeOneIsland(vector<vector<char>>& grid, unordered_set<pair<int, int>, pair_hash>& ones) {
        // pick any island, mark them as 0 on grid
        // remove those coordinates from ones
        int height = grid.size();
        int width = grid[0].size();

        // pick a random starting point in "ones"
        pair<int, int> currPos;
        for (const auto& p : ones) {
            currPos = p;
            break;
        }

        stack<pair<int, int>> tovisit;
        tovisit.push(currPos);

        while (!tovisit.empty()) {
            currPos = tovisit.top();
            tovisit.pop();
            grid[currPos.first][currPos.second] = '0';
            ones.erase(currPos);

            // for each neighbor that is "one", add to "tovisit"
            for (int i = 0; i < 4; i++) {
                int nr = currPos.first + drs[i];
                int nc = currPos.second + dcs[i];

                if (nr >= 0 && nr < height && nc >= 0 && nc < width && grid[nr][nc] == '1') {
                    tovisit.push(make_pair(nr, nc));
                    grid[nr][nc] = '0';
                }
            }
        }
    }

public:
    int numIslands(vector<vector<char>>& grid) {
        unordered_set<pair<int, int>, pair_hash> ones;
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[0].size(); j++) {
                if (grid[i][j] == '1') {
                    ones.insert(make_pair(i, j));
                }
            }
        }

        int islands = 0;
        while (!ones.empty()) {
            removeOneIsland(grid, ones);
            islands++;
        }

        return islands;
    }
};
