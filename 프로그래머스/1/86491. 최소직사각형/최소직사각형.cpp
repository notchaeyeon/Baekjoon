#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 0;
    vector<int> row; 
    vector<int> column;
    
    for(int i = 0 ; i < sizes.size() ; i++){
        if (sizes[i][0]>sizes[i][1]){
            row.push_back(sizes[i][0]);
            column.push_back(sizes[i][1]);
        }
        else {
            row.push_back(sizes[i][1]);
            column.push_back(sizes[i][0]);
        }
    }
                           
    sort(row.begin(),row.end());
    sort(column.begin(),column.end());
    
    int tmp_r = row.back();
    int tmp_c = column.back();
    
    answer = tmp_r*tmp_c;
    
    
    return answer;
}