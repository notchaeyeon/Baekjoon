#include <string>
#include <vector>
#include <math.h>
#include <algorithm>
#include <queue>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    queue<int> day;
    int size = progresses.size();
    int k = 0;
    
    for(int i = 0; i<size;i++){
        float tmp = ceil((100-progresses[i])/(float)speeds[i]);
        day.push((int)tmp);
    }


    while(!day.empty()){
        int cnt = 1;
        int n = day.front(); 
        day.pop();
        while(!day.empty()&&day.front()<=n) {
            cnt++;
            day.pop();
        }

        answer.push_back(cnt);

    }

    return answer;
}