#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int input[1000001];
    int length = 0;

    // 숫자를 한 자리씩 입력받습니다.
    char ch;
    while (scanf("%1d", &input[length]) == 1) {
        length++;
    }

    // 입력된 배열의 실제 사용된 부분만 정렬합니다.
    sort(input, input + length);

    // 정렬된 결과를 출력합니다.
    for(int i = length-1; i >=0 ; i--){
        cout << input[i];
    }

    return 0;
}
