// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#include <queue>
#include <stack>


int main() {
    int K=0, n=0, res;
    cin>>K;
    queue<int> card;
    
    for(int i=0;i<K;i++){
        n++;
        card.push(n);
    }

    while(!card.empty()){
        res = card.front();
        card.pop();
        card.push(card.front());
        card.pop();
    }
    
    cout<<res;

    return 0;
}