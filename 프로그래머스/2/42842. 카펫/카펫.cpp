#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer={};
    int tmp = (brown-4)/2;
    
    for(int i = 1; i<=tmp/2;i++){
        if((tmp-i)*i == yellow) {
            answer.push_back(tmp-i+2);
            answer.push_back(i+2);
        }
    }
    
    return answer;
}