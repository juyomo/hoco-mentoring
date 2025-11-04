// Author: Juyoung Moon
// https://www.acmicpc.net/problem/1912
// Similar problem: https://leetcode.com/problems/maximum-subarray/description/

// HOCO Mentoring HW
// https://github.com/juyomo/hoco-mentoring

#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    
    int tmp; 
    cin >> tmp;
    
    int currSum = tmp;
    int maxSum = tmp;

    for (int i = 1; i < n; i++) {
        cin >> tmp;
        currSum = max(tmp, currSum + tmp);
        maxSum = max(currSum, maxSum);
    }
    
    cout << maxSum << endl;
}
