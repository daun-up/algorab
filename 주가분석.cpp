#include <iostream>
using namespace std;

int main() {
    int t; // 테스트 케이스
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n; // 숫자 몇 개인지 입력
        cin >> n;
        int prev = -1, curr = -1, next; // 이전 값, 현재 값, 다음 값
        int input; // 입력
        int cnt = 0; // 총 몇 번 고점을 지나는지 출력할 값
        for (int j = 0; j < n; j++) {
            cin >> input;
            if (prev == -1) { // 만약 이전 값이 -1 이면
                prev = input; // 이전 값에 현재 값을 넣고
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

// 초기에 이전 값과 현재 값이 아직 입력되지 않았을 때를 나타내기 위해 변수를 -1 로 초기화 한다 (음수일 경우)
// 첫 번째 입력된 값은 이전 값이 없기 때문에 