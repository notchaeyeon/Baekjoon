
#include <iostream>
using namespace std;
#include <queue>
#include <stack>


int main() {
    int K, n, res=0;
    cin>>K;
    stack<int> num;
    
    for(int i=0;i<K;i++){
        cin>>n;
        if(n!=0) num.push(n);
        if(n==0) num.pop();
    }
    
    while(!num.empty()){
        res += num.top();
        num.pop();
    }
    
    cout<<res;
    return 0;
}