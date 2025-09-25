#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stack>
using namespace std;

static vector<vector<int>> A;
static vector<bool> visited;

void DFS(int v);

int main() { 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
  
    
    int n, m;
    cin >> n >> m;
    A.resize(n+1);
    visited = vector<bool> (n+1,false);
    
    for(int i = 0; i<m;i++){
        int s, e;
        cin >> s >> e;
        A[s].push_back(e);
        A[e].push_back(s);
    }
    
    int cnt = 0; 
    
    
    for(int i = 1;i<n+1;i++){
        if(!visited[i]) {cnt++; DFS(i);}
    }
    cout << cnt << " ";
    return 0;
}

void DFS(int v){
    if(visited[v]) return;
    visited[v] = true;
    for(int i : A[v])  {  
        if(visited[i]==false) DFS(i);
    }
}
