// Author: Juyoung Moon
// https://school.programmers.co.kr/learn/courses/30/lessons/43238

// HOCO Mentoring HW
// https://github.com/juyomo/hoco-mentoring

#include <string>
#include <vector>

using namespace std;

bool possible(const vector<int>& durationPerOfficer, const int numberOfPeople, long long timeToTest) {
    long long possiblePeople = 0;
    
    for (int n : durationPerOfficer) {
        possiblePeople += timeToTest / n;
    }
    
    return possiblePeople >= numberOfPeople;
}

long long solution(int numberOfPeople, vector<int> durationPerOfficer) {
    int minOfficer = durationPerOfficer[0];
    for (int n : durationPerOfficer) {
        if (n < minOfficer) {
            minOfficer = n;
        }
    }
    
    long long maxTotalTime = (long long)minOfficer * numberOfPeople;
    
    long long minTime = 0;
    long long maxTime = maxTotalTime;
    long long numToTest;
    long long answer = maxTime; // Initialize with maximum possible time.
    
    while (minTime <= maxTime) {
        numToTest = minTime + (maxTime - minTime) / 2; // Prevent overflow
        
        if (possible(durationPerOfficer, numberOfPeople, numToTest)) {
            answer = numToTest; // Store possible answer.
            maxTime = numToTest - 1; // Try to find a smaller time.
        } else {
            minTime = numToTest + 1; // Time is too small.
        }
    }
    return answer;
}
