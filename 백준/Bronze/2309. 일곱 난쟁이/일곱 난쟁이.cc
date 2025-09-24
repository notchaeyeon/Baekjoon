#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

int main() {
    
    vector<int> height;
    int sum=0;

    for(int i = 0;i<9;i++){
        int k = 0;
        cin >> k;
        height.push_back(k);
        sum+=k;
    }
    
    int target = sum - 100;
    
    sort(height.begin(),height.end());

    for(int i = 0; i<height.size();i++){
        for(int j = i+1; j<height.size();j++){
            if(height[i]+height[j] == target){
                height.erase(height.begin()+j);
                height.erase(height.begin()+i);
                i = height.size();
                break;
            }
        } 
    }
    

    while(!height.empty()){
        cout<<height.front()<<endl;
        height.erase(height.begin());
    }

    return 0;
}