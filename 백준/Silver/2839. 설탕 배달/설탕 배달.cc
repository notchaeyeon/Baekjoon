#include <iostream>
using namespace std;

int main() {
    int N, k = -1;
    cin >> N;
    int fd = N / 5;
    int fr = N % 5;

    for (int i = fd; i >= 0; i--) {
        fr = N - i * 5;  
        if (fr % 3 == 0) {  
            k = i + fr / 3;  
            break; 
        }
    }

    cout << k;
    return 0;
}
