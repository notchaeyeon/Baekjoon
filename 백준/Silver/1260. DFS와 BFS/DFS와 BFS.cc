#include <iostream>
#include <stack>
#include <queue>
#include <deque>
#include <algorithm>
using namespace std;
vector<vector<int>> v;
int m, n, s;
bool check1[1111], check2[1111];
void dfs(int x){
	cout << x << ' ';
	check1[x] = true;
	for (int next : v[x]) {
		if (!check1[next]) dfs(next);
	}
}
void bfs(int x){
	queue<int> q;
	check2[x] = true;
	q.push(x);
	while (!q.empty()) {
		int cur = q.front();
		q.pop();
		cout << cur << ' ';
		for (int next : v[cur]) {
			if (!check2[next]) {
				q.push(next);
				check2[next] = true;
			}
		}
	}

}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m >> s;
	v.resize(n + 1);
	while (m--) {
		int a, b;
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	for (int i = 1; i <= n; i++) sort(v[i].begin(), v[i].end());
	dfs(s);
	cout << '\n';
	bfs(s);
}
