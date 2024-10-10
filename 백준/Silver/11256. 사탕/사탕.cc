#include <iostream>
#include <queue>
#include <vector>
#include <functional> // greater<int>()를 사용하기 위한 헤더
using namespace std;

int main() {
    int T;
    cin >> T;

    for (int k = 0; k < T; k++) {
        int J, N, res = 0;
        priority_queue<int> BoxSize; // 내림차순 정렬을 위한 우선순위 큐
        int r, c;
        
        cin >> J >> N;
        
        for (int i = 0; i < N; i++) {
            cin >> r >> c;
            int s = r * c;
            BoxSize.push(s); // 상자 크기 큐에 삽입
        }
        

        while (!BoxSize.empty()) {
            int largestBox = BoxSize.top(); 
            BoxSize.pop();
            
            res++; 
            J -= largestBox; 
            
            if (J <= 0) break; 
        }
        
        cout << res << "\n"; 
    }
    
    return 0;
}
