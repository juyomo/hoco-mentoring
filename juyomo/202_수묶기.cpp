// Author: Juyoung Moon
// https://www.acmicpc.net/problem/1744

// HOCO Mentoring HW
// https://github.com/juyomo/hoco-mentoring

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> nums(n);

    int numNegs = 0;
    int numZero = 0;
    int numPos = 0;
    int numOnes = 0;

    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        nums[i] = tmp;
        
        if (tmp == 1) {
            numOnes++;
        } else if (tmp > 0) {
            numPos++;
        } else if (tmp == 0) {
            numZero++;
        } else {
            numNegs++;
        }
    }
    
    sort(nums.begin(), nums.end());
    
    int sum = 0;

    // Add negs (multiply two together to get positive)
    for (int i = 0; i + 1 < numNegs; i+=2) {
        sum += (nums[i] * nums[i+1]);
    }
    
    // Add remaining negative if there are odd number of negatives.
    // If there is at least one zero, we don't add it because we can multiply the zero to the lone negative to get zero.
    if (numNegs % 2 == 1 && numZero == 0) {
        sum += nums[numNegs-1];
    }

    // Group together positives except for one.
    for (int i = nums.size() - 1; i-1 >= numNegs + numZero + numOnes; i -=2) {
        sum += (nums[i] * nums[i-1]);
    }
    
    // Add lone positive if it exists.
    if (numPos % 2 == 1) {
        sum += nums[numNegs + numZero + numOnes];
    }

    // Add ones. Don't group them.
    sum += numOnes;

    cout << sum << endl;
}
