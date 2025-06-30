#include <string>
#include <vector>
#include <algorithm>


using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    int s = answers.size();
    int a[3]={0, 0, 0};
    //answers = {1, 2, 3, 4, 5}
    //1번 학생 1, 2, 3, 4, 5
    for(int i = 0; i<s; i++){
        if ((i+1) % 5 == 1 && answers.at(i) == 1) {
            a[0] += 1;
        } else if ((i+1) % 5 == 2 && answers.at(i) == 2){
            a[0] += 1;  
        } else if ((i+1) % 5 == 3 && answers.at(i) == 3){
            a[0] += 1; 
        } else if ((i+1) % 5 == 4 && answers.at(i) == 4){
            a[0] += 1;  
        } else if ((i+1) % 5 == 0 && answers.at(i) == 5){
            a[0] += 1;  
        }
    }
    
    //2번 학생 2, 1, 2, 3, 2, 4, 2, 5
        for(int i = 0; i<s; i++){
            if ((i+1) % 2 == 1 && answers.at(i) == 2) {
                a[1] += 1;   
            } else if ((i+1) % 8 == 2 && answers.at(i) == 1){
                a[1] += 1;  
            } else if ((i+1) % 8 == 4 && answers.at(i) == 3){
                a[1] += 1;  
            } else if ((i+1) % 8 == 6 && answers.at(i) == 4){
                a[1] += 1;  
            } else if ((i+1) % 8 == 0 && answers.at(i) == 5){
                a[1] += 1;  
            }
    }
    
    //3번 학생 3, 3, 1, 1, 2, 2, 4, 4, 5, 5
        for(int i = 0; i<s; i++){
            if (((i+1) % 10 == 1 || (i+1) % 10 ==2) && answers.at(i) == 3) {
                a[2] += 1;   
            } else if (((i+1) % 10 == 3 || (i+1) % 10 == 4) && answers.at(i) == 1){
                a[2] += 1;  
            } else if (((i+1) % 10 == 5 || (i+1) % 10 ==6) && answers.at(i) == 2){
                a[2] += 1; 
            } else if (((i+1) % 10 == 7 || (i+1) % 10 == 8) && answers.at(i) == 4){
                a[2] += 1; 
            } else if (((i+1) % 10 == 9 || (i+1) % 10 == 0) && answers.at(i) == 5){
                a[2] += 1; 
            }
    }
    printf("%d %d %d", a[0], a[1], a[2]);
    
    int max = a[0];
    
    for(int i = 1; i<3;i++){
        if (max< a[i]) max = a[i];
    }
    
    for(int i = 0; i < 3;i++){
        if (max == a[i]) answer.push_back(i+1);
    }

    return answer;
}