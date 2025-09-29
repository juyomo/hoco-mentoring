// Author: Juyoung Moon
// https://school.programmers.co.kr/learn/courses/30/lessons/12906

// HOCO Mentoring HW 1
// https://github.com/juyomo/hoco-mentoring

#include <vector>
#include <iostream>
#include <queue>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    answer.push_back(arr[0]);
    
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] != arr[i-1]) {
            answer.push_back(arr[i]);
        }
    }
    
    return answer;
}
