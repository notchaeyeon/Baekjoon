#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int solution(vector<vector<string>> clothes) {
    
        
    int answer = 1;
    map<string, int> mp;
    
    
    for(int i = 0 ;i<clothes.size();i++){
        if(mp.find(clothes[i][1])==mp.end())mp.insert({clothes[i][1],1});
        else  mp[clothes[i][1]]++;
    }
    
    for (const auto& [key, val] : mp) {
        answer *= (val + 1);
    }
    
    answer -= 1;
    
    return answer;
}