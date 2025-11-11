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
    // Officers 3  9  1  1  2  8
    // We want to even it out
    // Persons  a  b  c  d  e  f = sum is numberOfPeople
    //         3a 9b  c  d  2e 8f -> we want to minimize the maximum of these
    
    int minOfficer = durationPerOfficer[0];
    for (int n : durationPerOfficer) {
        if (n < minOfficer) {
            minOfficer = n;
        }
    }
    
    long long maxTime = (long long) minOfficer * numberOfPeople;
    long long minTime = 0;
    long long mid;
    
    //
    while (minTime <= maxTime) {
        mid = (minTime + maxTime) / 2;
        
        bool currentNumOk = possible(durationPerOfficer, numberOfPeople,  mid);
        bool prevNumOk = possible(durationPerOfficer, numberOfPeople,  mid - 1);
        
        if ( currentNumOk && !prevNumOk ) {
            return mid;
        } else if (!currentNumOk) {
            // too small!
            minTime = mid+1;
        } else {
            // might be smaller
            maxTime = mid-1;
        }
    }
    
    /*
    ll l = 1;
    ll r = (ll) n * v[v.size()-1];
    */
    
    return -1;
}
