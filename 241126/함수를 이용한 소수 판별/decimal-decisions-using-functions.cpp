#include <iostream>
using namespace std;

/// <summary>
/// a 이상 b 이하의 모든 소수의 합을 구하는 함수
/// </summary>
int IsPrimeSum(int a, int b) {
    int sum = 0;

    for (int i = a; i <= b; i++) {
        if (i < 2) continue; // 2보다 작은 숫자는 소수가 아님

        bool isPrime = true; // 소수인지 판단하는 변수
        for (int j = 2; j * j <= i; j++) { // i의 제곱근까지만 검사
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            sum += i; // 소수일 경우 합산
        }
    }

    return sum;
}

int main() {
    int a, b;
    cin >> a >> b;

    int result = IsPrimeSum(a, b);
    cout << result;

    return 0;
}
