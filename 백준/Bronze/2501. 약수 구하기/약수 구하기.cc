#include <iostream>
#include <queue>

using namespace std;

int main() {
    queue<int> res;
    int p, q;
    cin >> p >> q;
    
    for(int i = 1; i <= p; i++) {
        if(p % i == 0) {
            res.push(i);
        }
    }
    

    for(int j = 0; j < q-1 && !res.empty(); j++) {
        res.pop();
    }

    if (!res.empty()) {
        cout << res.front();
    } else cout << 0;
    return 0;
}