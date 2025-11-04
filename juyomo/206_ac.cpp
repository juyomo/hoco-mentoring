// Author: Juyoung Moon
// https://www.acmicpc.net/problem/5430
// AC

// HOCO Mentoring HW
// https://github.com/juyomo/hoco-mentoring

#include <iostream>
#include <vector>

using namespace std;

class QStack {
public:
    vector<int> nums;
    int start;
    int end;
    bool dir;
    
    QStack(vector<int> v) {
        nums = v;
        start = 0;
        end = v.size() - 1;
        dir = true;
    }

    void reverse() {
        dir = !dir;
    }
    
    bool deleteN() {
        if (start > end) {
            return false;
        }

        if (dir) {
            start++;
        } else {
            end--;
        }
        return true;
    }
    
    void print() {
        if (dir) {
            printOrder();
        } else {
            printReverse();
        }
    }

    void printOrder() {
        cout << "[";
        for (int i = start; i <= end; i++) {
            if (i != start) {
                cout << ",";
            }
            cout << nums[i];
        }
        cout << "]\n";
    }

    void printReverse() {
        cout << "[";
        for (int i = end; i >= start; i--) {
            if (i != end) {
                cout << ",";
            }
            cout << nums[i];
        }
        cout << "]\n";
    }
};

int main() {
    int tcs;
    cin >> tcs;
    for (int i = 0; i < tcs; i++) {
        string ops;
        int dataSize;
        string data;
        
        cin >> ops >> dataSize >> data;
        
        // insert data
        // [1, 2, 3, 4] 
        vector<int> dataVec;
        string currNum = "";
        for (int i = 1; i < data.size() - 1; i++) {
            char c = data[i];
            if (c == ',') {
                dataVec.push_back(stoi(currNum));
                currNum = "";
            } else {
                currNum.push_back(c);
            }
        }
        if (currNum != "") {
            dataVec.push_back(stoi(currNum));
        }
        QStack nums(dataVec);

        bool res = true;
        for (char c : ops) {
            if (c == 'R') {
                nums.reverse();
            } else if (c == 'D') {
                res = nums.deleteN();
                if (res == false) {
                    cout << "error\n";
                    break;
                }
            }
        }
        if (res) {
            nums.print();
        }
    }
}
