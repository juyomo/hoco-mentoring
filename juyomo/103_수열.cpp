// Author: Juyoung Moon
// https://www.acmicpc.net/problem/2559

// HOCO Mentoring HW
// https://github.com/juyomo/hoco-mentoring

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    
    vector<int> nums(n);

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    int sum = 0;
    for (int j = 0; j < k; j++) {
        sum += nums[j];
    }
    
    int maxSoFar = sum;
    for (int r = k; r < n; r++) {
        int l = r - k;
        sum += nums[r];
        sum -= nums[l];
        maxSoFar = max(sum, maxSoFar);
    }
    cout << maxSoFar;
}
