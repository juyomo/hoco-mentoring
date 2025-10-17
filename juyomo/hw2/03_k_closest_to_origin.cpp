// Author: Juyoung Moon
// https://leetcode.com/problems/k-closest-points-to-origin/

// HOCO Mentoring HW 2
// https://github.com/juyomo/hoco-mentoring

class Solution {
public:
    struct Point { 
        int idx;
        int dist;
        Point(int i, int d) : idx(i), dist(d) {}
    };

    struct Compare {
        bool operator()(const Point& a, const Point& b) {
            return a.dist < b.dist;
        }
    };

    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<Point, vector<Point>, Compare> pq;
        for (int i = 0; i < points.size(); i++) {
            int x = points[i][0];
            int y = points[i][1];
            int distSq = x*x + y*y;
            Point p(i, distSq);
            pq.push(p);
            if (pq.size() > k) {
                pq.pop();
            }
        }
        vector<vector<int>> ans;
        while (pq.size() > 0) {
            ans.push_back(points[pq.top().idx]);
            pq.pop();
        }
        return ans;
    }
};
