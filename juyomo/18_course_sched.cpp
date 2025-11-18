// Author: Juyoung Moon
// https://leetcode.com/problems/course-schedule/

// HOCO Mentoring HW
// https://github.com/juyomo/hoco-mentoring

class Solution {
public:
    bool detectCycle(const vector<vector<int>>& courses,
                     unordered_set<int>& needToTake,
                     unordered_set<int>& seenInCurrentScan,
                     int startNode) {
        if (seenInCurrentScan.count(startNode) > 0) {
            return true;
        }
        
        if (needToTake.count(startNode) == 0) {
            return false;
        }

        needToTake.erase(startNode);
        seenInCurrentScan.insert(startNode);

        for (int nb : courses[startNode]) {
            if (detectCycle(courses, needToTake, seenInCurrentScan, nb)) {
                return true;
            }
        }

        seenInCurrentScan.erase(startNode);
        return false;
    }

    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        // detect cycles
        vector<vector<int>> courses(numCourses, vector<int>());

        for (const auto& pair : prerequisites) {
            int from = pair[0];
            int to = pair[1];

            courses[from].push_back(to);
        }

        unordered_set<int> needToTake;
        for (int i = 0; i < numCourses; i++) {
            needToTake.insert(i);
        }
        
        while (!needToTake.empty()) {
            // pick a random element in needToTake
            int startNode = 0;
            for (int n : needToTake) {
                startNode = n;
                break;
            }
            unordered_set<int> seenInCurrentScan;
            
            if (detectCycle(courses, needToTake, seenInCurrentScan, startNode)) {
                return false;
            }
        }

        return true;
    }
};
