// Author: Juyoung Moon
// https://www.acmicpc.net/problem/1268

// HOCO Mentoring HW
// https://github.com/juyomo/hoco-mentoring

#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
using namespace std;
int main() {
    int numStudents;
    cin >> numStudents;
    vector<vector<int>> whichClass(numStudents, vector<int>(5));
    unordered_map<int, vector<int>> countsPerClass;

    for (int studentNum = 0; studentNum < numStudents; studentNum++) {
        for (int year = 0; year < 5; year++) {
            int cl;
            cin >> cl;
            whichClass[studentNum][year] = cl;
            int classNum = year * 10 + cl;
            countsPerClass[classNum].push_back(studentNum);
        }
    }

    vector<unordered_set<int>> friendsPerStudent(numStudents);
    for (int studentNum = 0; studentNum < numStudents; studentNum++) {
        for (int year = 0; year < 5; year++) {
            int cl = whichClass[studentNum][year];
            int classNum = year * 10 + cl;
            for (int st : countsPerClass[classNum]) {
                friendsPerStudent[studentNum].insert(st);
            }
        }
    }

    int maxFriends = 0;
    int studentWithMaxFriends = -1;

    for (int studentNum = numStudents-1; studentNum >= 0; studentNum--) {
        if (friendsPerStudent[studentNum].size() >= maxFriends) {
            maxFriends = friendsPerStudent[studentNum].size();
            studentWithMaxFriends = studentNum;
        }
    }
    cout << studentWithMaxFriends + 1;
}
