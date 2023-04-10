#include <iostream>
using namespace std;

int main() {
    int t; // Number of Testcase;
    cin >> t;
    for (int test = 0; test < t; test++) {
        int n;
        cin >> n;
        int prev = -1, curr = -1, next;
        int input;
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            cin >> input;
            if (prev == -1) {
                prev = input;
                continue;
            }
            if (curr == -1) {
                curr = input;
                continue;
            }
            next = input;
            if (curr == next) continue;
            else if (prev < curr && curr > next) cnt++;
            prev = curr;
            curr = next;
        }
        cout << cnt << endl;
    }
}