#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> citations) {
    int answer = 0;
    int total = citations.size();

    sort(citations.begin(),citations.end());

    vector<int> tmp;

    for(int i = 0;i<total;i++){
        if(citations[i]>=total-i) tmp.push_back(total-i);
    }
    if(tmp.empty()==1) answer = 0;
    else{
        sort(tmp.begin(),tmp.end());
        answer = tmp.back();
    }
    
    return answer;
}