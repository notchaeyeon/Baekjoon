#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main() { 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    
    int N;
    cin >> N;
    vector<long long> num(N);
    for(int i = 0; i<N;i++){
        cin>>num[i];
    }
    
    sort(num.begin(),num.end());
    
    for(int i = 0; i<N;i++){
        cout<<num[i]<<endl;
    }
    return 0;
}