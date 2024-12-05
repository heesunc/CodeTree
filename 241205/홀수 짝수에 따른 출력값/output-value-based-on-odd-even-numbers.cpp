#include <iostream>
using namespace std;

// 홀수의 합을 구하는 재귀 함수
int sumOdd(int n) {
    if (n == 1) return 1; // 종료 조건
    return n + sumOdd(n - 2); // 재귀 호출
}

// 짝수의 합을 구하는 재귀 함수
int sumEven(int n) {
    if (n == 2) return 2; // 종료 조건
    return n + sumEven(n - 2); // 재귀 호출
}

int main() {
    int N;
    cin >> N;

    if (N % 2 == 1) { // 홀수일 경우
        cout << sumOdd(N) << endl;
    } else { // 짝수일 경우
        cout << sumEven(N) << endl;
    }

    return 0;
}
