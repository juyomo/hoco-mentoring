// Author: Juyoung Moon
// https://school.programmers.co.kr/learn/courses/30/lessons/12946

// HOCO Mentoring HW
// https://github.com/juyomo/hoco-mentoring

#include <string>
#include <vector>

using namespace std;

void solve(int n, int src, int dest, int tmp, vector<vector<int>>& soln) {
    if (n == 1) {
        soln.push_back({src, dest});
        return;
    }
    solve(n-1, src, tmp, dest, soln);
    soln.push_back({src, dest});
    solve(n-1, tmp, dest, src, soln);
}
vector<vector<int>> solution(int n) {
    vector<vector<int>> answer;
    
    solve(n, 1, 3, 2, answer);
    return answer;
}
