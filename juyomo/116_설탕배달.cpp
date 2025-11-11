// Author: Juyoung Moon
// https://www.acmicpc.net/problem/2839

// HOCO Mentoring HW
// https://github.com/juyomo/hoco-mentoring

#include <iostream>

using namespace std;

int main() {
    int kgs;
    cin >> kgs;
    
    if (kgs < 3) { 
        cout << -1 << endl;
        return 0;
    }
    int numFives = kgs / 5;
    while (numFives >= 0 && (kgs - (5 * numFives)) % 3 != 0) {
        numFives--;
    }
    
    if (numFives < 0) {
        cout << -1;
        return 0;
    } 
    int numThrees = (kgs - (5 * numFives)) / 3;
    
    cout << numFives + numThrees << endl;
}
