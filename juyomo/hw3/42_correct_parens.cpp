// Author: Juyoung Moon
// https://school.programmers.co.kr/learn/courses/30/lessons/12909

// HOCO Mentoring HW 3
// https://github.com/juyomo/hoco-mentoring

#include<string>
#include <iostream>
#include <stack>

using namespace std;

bool solution(string s)
{
    int counter = 0;
    for (int i = 0; i < s.size(); i++) {
        char curr = s[i];
        if (curr == '(') {
            counter++;
        } else {
            counter--;
        }
        if (counter < 0) {
            return false;
        }
    }
    return counter == 0;
}
