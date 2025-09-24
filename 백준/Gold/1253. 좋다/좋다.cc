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
    
    long long n, m, sum; 
    int cnt = 0;   
    int s = 0;
    sort(num.begin(),num.end());
    
    while(s<num.size()){
        n = 0;
        m = num.size()-1;
        
        while(n<m){
            if(s == m) {m--; continue;}
            else if(s == n) {n++; continue;}
            else{
                sum = num[n] + num[m];
                
                    if(sum<num[s]) n++;
                    else if (sum>num[s]) m--;
                    else if (sum == num[s]) {cnt++; break;}
                        
               
                
            }
        }
        
        s++;
    }
    cout<<cnt;
    return 0;
}