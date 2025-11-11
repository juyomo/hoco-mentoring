// Author: Juyoung Moon
// https://school.programmers.co.kr/learn/courses/30/lessons/12946

// HOCO Mentoring HW
// https://github.com/juyomo/hoco-mentoring

#include <string>
#include <vector>

using namespace std;

void toh(int n, int from, int temp, int to, vector<vector<int>>& answer) {
    if (n == 0) {
        return;
    }
    toh(n - 1, from, to, temp, answer);
    answer.push_back({from,to});
    toh(n - 1, temp, from, to , answer);
}

vector<vector<int>> solution(int n) {
    vector<vector<int>> answer;
    toh(n, 1, 2, 3, answer);
    return answer;
}
