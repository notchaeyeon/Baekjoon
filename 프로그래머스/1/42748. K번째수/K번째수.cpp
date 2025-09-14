#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    vector<int> tmp;

    for(int k = 0; k<commands.size();k++){
        int res = commands[k][2];
        int i = 0;
        tmp = {0};
        
        for(i = commands[k][0]-1;i<commands[k][1];i++){
        tmp.push_back(array[i]);
        }
        
        sort(tmp.begin(),tmp.end());
        
        answer.push_back(tmp[res]);

    }

    return answer;
}