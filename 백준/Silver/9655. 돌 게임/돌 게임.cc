#include <iostream>

using namespace std;

int main() {
    int number = 0;

    cin >> number;

    if(number%2==0) cout << "CY";
    if(number%2!=0) cout << "SK";
    
    return 0;
}
