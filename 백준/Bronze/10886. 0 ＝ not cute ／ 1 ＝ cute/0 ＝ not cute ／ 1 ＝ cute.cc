#include <iostream>
#include <queue>
using namespace std;

int main() {
    int N, n, zcount = 0, ocount = 0;
    cin >> N;
    queue<int> opn;

    // 입력을 큐에 저장
    for (int i = 0; i < N; i++) {
        cin >> n;
        opn.push(n);
    }

    // 큐에서 값을 꺼내면서 카운트
    while (!opn.empty()) {
        if (opn.front() == 0) {
            zcount++;
        } else if (opn.front() == 1) {
            ocount++;
        }
        opn.pop(); // 큐에서 제거
    }

    // 결과 출력
    if (zcount >= ocount) {
        cout << "Junhee is not cute!" << endl;
    } else {
        cout << "Junhee is cute!" << endl;
    }

    return 0;
}