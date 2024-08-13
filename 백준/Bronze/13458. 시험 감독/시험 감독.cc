#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int number;
    cin >> number;

    int arr[1000001];
    for (int i = 0; i < number; i++) {
        cin >> arr[i];
    }

    int b, c;
    cin >> b >> c;

    long long res = 0;  

    for (int i = 0; i < number; i++) {
        res += 1;
        int remaining = arr[i] - b;  

        if (remaining > 0) {
            res += (remaining + c - 1) / c;  
        }
    }

    cout << res << endl;

    return 0;
}
