#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> nums)
{
    int answer = 0;
    vector<int> temp;
    int size = nums.size()/2;

    sort(nums.begin(), nums.end());
    
    for(int i = 0; i<nums.size();i++){
        temp.push_back(nums[i]);
    }
    temp.erase(unique(temp.begin(), temp.end()), temp.end());
        
    if(temp.size()<size) answer = temp.size();
    else answer = size;
    
    return answer;
}