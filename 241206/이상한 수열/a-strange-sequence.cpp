#include <iostream>
using namespace std;

// 재귀 함수 정의
int sequence(int n) {
    if (n == 1) return 1; // 첫 번째 값
    if (n == 2) return 2; // 두 번째 값
    return sequence(n / 3) + sequence(n - 1); // ⌊N/3⌋번째 값 + (N-1)번째 값
}

int main() {
    int N;
    cin >> N; // 입력받기
    cout << sequence(N) << endl; // N번째 값 출력
    return 0;
}
