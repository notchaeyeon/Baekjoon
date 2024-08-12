#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main() {
    queue<string> res;
    int num1, num2;

    while (true) {
        cin >> num1 >> num2;

        if (num1 == 0 && num2 == 0) break;

        if (num1 % num2 == 0) 
            res.push("multiple");
        else if (num2 % num1 == 0) 
            res.push("factor");
        else 
            res.push("neither");
    }

    while (!res.empty()) {
        cout << res.front() << endl;
        res.pop();
    }

    return 0;
}