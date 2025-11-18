// Author: Juyoung Moon
// https://www.acmicpc.net/problem/11726

// HOCO Mentoring HW
// https://github.com/juyomo/hoco-mentoring

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> dp(n+1);
    // 1 1 2 3 5
    dp[0] = 1;
    dp[1] = 1;
    for (int i = 2; i < dp.size(); i++) {
        dp[i] = (dp[i-1] + dp[i-2]) % 10007;
    }
    cout << dp[n] << endl;
}
