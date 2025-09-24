#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main() { 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    int N, M;
    cin >> N >> M;
    vector<long long> num(N);
    vector<long long> sum(N);
    
    for(int i = 0; i< N;i++){
        if(!(cin>>num[i])) return 0;
    }
    // num = 5 4 3 2 1
    
    for(int i = 0; i< N;i++){
        if(i == 0) sum[0] = num[0];
        else sum[i] = sum[i-1] + num[i];
    }
    // sum = 5 9 12 14 15 
    
    for(int i = 0;i<M;i++){
        int begin, end, res =0;
        cin >> begin >> end;
        if (begin==1) res = sum[end-1];
        else res = sum[end-1]-sum[begin-2];
        cout<<res<<"\n";
    }

    return 0;
}