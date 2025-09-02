#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    
    sort(participant.begin(),participant.end());
    sort(completion.begin(),completion.end());
    
    
    while(!completion.empty()){
        if(participant.back()==completion.back()) {
            participant.pop_back();
            completion.pop_back();
        }
        else break;
    }
    
    answer = participant.back();
    return answer;
}