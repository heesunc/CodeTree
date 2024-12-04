#include <iostream>
using namespace std;

// 피보나치 재귀 함수
int fibonacci(int n) {
    if (n == 1 || n == 2) {
        return 1; // 첫 번째와 두 번째 피보나치 수는 1
    }
    return fibonacci(n - 1) + fibonacci(n - 2); // 재귀 호출
}

int main() {
    int N;
    cin >> N; // 입력 받기
    cout << fibonacci(N) << endl; // N번째 피보나치 수 출력
    return 0;
}