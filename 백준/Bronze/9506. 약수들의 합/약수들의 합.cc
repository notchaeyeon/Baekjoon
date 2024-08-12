#include <iostream>
#include <queue>

using namespace std;

int main() {
    int num;
    
    while (true) {
        cin >> num;

        if (num == -1) break;

        queue<int> res;
        int sum = 0;

        for (int i = 1; i < num; i++) {
            if (num % i == 0) {
                res.push(i);
                sum += i;
            }
        }

        if (sum == num) {
            cout << num << " = " << res.front();
            res.pop();

            while (!res.empty()) {
                cout << " + " << res.front();
                res.pop();
            }
            cout << endl;
        } else {
            cout << num << " is NOT perfect." << endl;
        }
    }

    return 0;
}