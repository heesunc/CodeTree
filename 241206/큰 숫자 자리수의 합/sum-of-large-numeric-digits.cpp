#include <iostream>
using namespace std;

// 각 자리 숫자들의 합을 계산하는 재귀 함수
int sumOfDigits(int num) {
    if (num == 0) {
        return 0; // base case: 숫자가 0이면 합은 0
    }
    return (num % 10) + sumOfDigits(num / 10); // 마지막 자리 + 나머지 자리들의 합
}

int main() {
    int a, b, c;
    cin >> a >> b >> c; // 세 정수 입력

    // 세 숫자의 곱 계산
    int product = a * b * c;

    // 곱한 결과의 각 자리 숫자들의 합 계산
    int result = sumOfDigits(product);

    // 결과 출력
    cout << result << endl;

    return 0;
}