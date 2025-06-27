#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    
    int i = 0 ;
    int prev = -1;
    int size = arr.size();
    
    while(i < size){
        
        int now = arr.at(i);
        
        if(prev != now) {
            answer.push_back(arr[i]);
            prev = arr[i];
        }
        
        i++;
    }

    return answer;
}