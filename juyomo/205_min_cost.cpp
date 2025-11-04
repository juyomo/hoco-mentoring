// Author: Juyoung Moon
// https://www.acmicpc.net/problem/1916
// 최소비용 구하기

// HOCO Mentoring HW
// https://github.com/juyomo/hoco-mentoring

#include <iostream>
#include <vector>
#include <climits>
#include <unordered_set>
using namespace std;

class City {
    public:
    vector<pair<int, int>> neighborsWithCost;
    int id;

    City(int _id) : id(_id) {}

    void addNeighbor(int n, int cost) {
        neighborsWithCost.push_back(make_pair(n, cost));
    }

    vector<pair<int, int>> getNeighbors() const {
        return neighborsWithCost;
    }
};

int main() {
    int numCities, numBuses;
    cin >> numCities >> numBuses;
    vector<City> cities;
    
    for (int i = 0; i <= numCities; i++) {
        City c(i);
        cities.push_back(c);
    }
    vector<int> cost(numCities + 1, INT_MAX);

    for (int i = 0; i < numBuses; i++) {
        int start, end, cost;
        cin >> start >> end >> cost;

        cities[start].addNeighbor(end, cost);
    }
    int start, end;
    cin >> start >> end;
    
    unordered_set<int> visited;
    unordered_set<int> tovisit;
    cost[start] = 0;

    for (int i = 1; i <= numCities; i++) {
        tovisit.insert(i);
    }

    while (tovisit.size() > 0) {
        int minIdx = -1;
        int minCost = INT_MAX;
        for (int i = 1; i <= numCities; i++) {
            if (cost[i] < minCost && tovisit.find(i) != tovisit.end()) {
                minIdx = i;
                minCost = cost[i];
            }
        }

        if (minIdx == -1) {
            break;
        }

        const City& currCity = cities[minIdx];
        for (const auto& ngh : currCity.getNeighbors()) {
            int cityNum = ngh.first;
            int nextCost = ngh.second;
            if (visited.find(ngh.first) == visited.end()) {
                int possibleCost = nextCost + cost[minIdx];
                if (possibleCost < cost[cityNum]) {
                    cost[cityNum] = possibleCost;
                }
            }
        }

        tovisit.erase(minIdx);
        visited.insert(minIdx);
    }

    cout << cost[end] << endl;
}
