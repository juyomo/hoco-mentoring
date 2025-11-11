// Author: Juyoung Moon
// https://www.acmicpc.net/problem/1463

// HOCO Mentoring HW
// https://github.com/juyomo/hoco-mentoring

#include <iostream>
#include <queue>

using namespace std;

int main() {
    int x;
    cin >> x;
    
    queue<pair<int, int>> tovisit;
    tovisit.push(make_pair(x, 0));
    
    while (!tovisit.empty()) {
        const auto& curr = tovisit.front();
        tovisit.pop();
        
        int currNum = curr.first;
        
        if (currNum == 1) {
            cout << curr.second << endl;
            return 0;
        }
        
        int currCalcs = curr.second + 1;
        if (currNum > 1) {
            if (currNum % 3 == 0) {
                tovisit.push(make_pair(currNum/3, currCalcs));
            }
            if (currNum % 2 == 0) {
                tovisit.push(make_pair(currNum/2, currCalcs));
            }
            tovisit.push(make_pair(currNum-1, currCalcs));
        }
    }
    cout << -1 << endl;
}
