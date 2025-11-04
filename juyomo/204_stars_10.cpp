// Author: Juyoung Moon
// https://www.acmicpc.net/problem/2447
// 별 찍기 10

// HOCO Mentoring HW
// https://github.com/juyomo/hoco-mentoring

#include <iostream>
using namespace std;

bool printStar(int r, int c) {
    while (r > 0 && c > 0) {
        if (r % 3 == 1 && c % 3 == 1) {
            return false;
        }
        r /= 3;
        c /= 3;
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    for (int r = 0; r < n; r++) {
        for (int c = 0; c < n; c++) {
            if (printStar(r, c)) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
}
