// Author: Juyoung Moon
// https://www.acmicpc.net/problem/1260

// HOCO Mentoring HW 1
// https://github.com/juyomo/hoco-mentoring

#include <iostream>
#include <vector>
#include <stack>
#include <unordered_set>
#include <queue>
#include <algorithm>
using namespace std;

void printDFS(const vector<vector<int>>& nodes, int start) {
    stack<int> tovisit;
    tovisit.push(start);
    unordered_set<int> visited;
    
    while (!tovisit.empty()) {
        int curr = tovisit.top();
        tovisit.pop();

        if (visited.count(curr) == 0) {
            // process curr node
            visited.insert(curr);
            cout << curr << " ";
            
            const vector<int>& neighbors = nodes[curr];
            
            for (int i = neighbors.size() - 1; i >= 0; i--) {
                int n = neighbors[i];
                if (visited.count(n) == 0) {
                    tovisit.push(n);
                }
            }
        }
    }
    cout << endl;
}

void printBFS(const vector<vector<int>>& nodes, int start) {
    queue<int> tovisit;
    tovisit.push(start);
    unordered_set<int> visited;
    visited.insert(start);
    
    while (!tovisit.empty()) {
        int curr = tovisit.front();
        tovisit.pop();
        cout << curr << " ";
        
        const vector<int>& neighbors = nodes[curr];
        for (int i = 0; i < neighbors.size(); i++) {
            int n = neighbors[i];
            if (visited.count(n) == 0) {
                tovisit.push(n);
                visited.insert(n);
            }
        }
    }
    cout << endl;
}

int main() {
    int n, e, start;
    cin >> n >> e >> start;
    
    // store graph
    vector<vector<int>> nodes(n+1);
    for (int i = 0; i < e; i++) {
        int from, to;
        cin >> from >> to;
        nodes[from].push_back(to);
        nodes[to].push_back(from);
    }

    for (int i = 0; i < nodes.size(); i++) {
        vector<int>& nghbrs = nodes[i];
        sort(nghbrs.begin(), nghbrs.end());
    }
    
    printDFS(nodes, start);
    printBFS(nodes, start);
}
