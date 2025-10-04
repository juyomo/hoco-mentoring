// Author: Juyoung Moon
// https://school.programmers.co.kr/learn/courses/30/lessons/42626

// HOCO Mentoring HW 1
// https://github.com/juyomo/hoco-mentoring

#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(vector<int> scoville, int K) {
    priority_queue <int, vector<int>, greater<int>> pq; 
    for (int n : scoville) {
        pq.push(n);
    }
    
    int res = 0;
    while (pq.size() > 1 && pq.top() < K) {
        int top = pq.top();
        pq.pop(); 
        int second = pq.top();
        pq.pop();
        pq.push(top + second * 2);
        res++;
    }
    
    if (pq.top() < K) {
        return -1;
    }
    
    return res;
}
