// Author: Juyoung Moon
// https://www.acmicpc.net/problem/1406

// HOCO Mentoring HW
// https://github.com/juyomo/hoco-mentoring

#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(NULL);
    
	string s;
	cin >> s;
	string before = s;
	string after = "";
	
	int n;
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		char op;
		cin >> op;
		switch (op) {
			case 'L': // left
				// move last char of before to after
				if (before.size() > 0) {
					after.push_back(before[before.size() - 1]);
					before.pop_back();
				}
				break;

			case 'D': // right
				if (after.size() > 0) {
					before.push_back(after.back());
					after.pop_back();
				}
				break;

			case 'B':
				if (before.size() > 0) {
					before.pop_back();
				}
				break;

			case 'P':
				char param;
				cin >> param;
				before += param;
				break;
		}
	}

	cout << before;
	for (int i = after.size() - 1; i >= 0; i--) {
		cout << after[i];
	}
}
