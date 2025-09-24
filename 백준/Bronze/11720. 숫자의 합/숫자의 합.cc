#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    int size, sum = 0;
    string input;
    cin >> size;
    cin >> input;
    
    for(int i = 0;i<size;i++){
        string tmp = input.substr(i,1);
        sum+=stoi(tmp);
    }
    cout<<sum;
    return 0;
}