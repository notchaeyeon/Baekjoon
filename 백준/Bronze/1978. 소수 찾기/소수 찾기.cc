#include <iostream>

using namespace std;

int main() {
    
    int N, count = 0;
    int input[101];
    
    cin >> N;
    
    for(int i = 0; i < N; i++) {
        cin >> input[i];
    }
        
    for(int i = 0; i < N; i++) {  
        int cnt = 0;
        
        if (input[i] == 1) continue;

        for(int j = 2; j < input[i]; j++) {
            if (input[i] % j == 0) {
                cnt++;
                break; 
            }
        }

        if (cnt == 0) {
            count++;
        }
    } 
    
    cout << count;
        
    return 0;
}