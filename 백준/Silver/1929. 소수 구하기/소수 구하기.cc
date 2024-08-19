#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    
    if(N < 2) N = 2;
    
    vector<int> arr(M + 1, 1); 
    
    for (int i = 2; i * i <= M; i++) {
        if (arr[i]) { 
            for (int j = i * i; j <= M; j += i) {
                arr[j] = 0;
            }
        }
    }
    
    for (int i = N; i <= M; i++) {
        if (arr[i]) {
            cout << i << " ";
        }
    }
    
    return 0;
}