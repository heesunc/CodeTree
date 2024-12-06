#include <iostream>
using namespace std;

// n이 1이 될 때까지 반복 횟수를 계산하는 재귀 함수
int countStepsToOne(int n) {
    if (n == 1) {
        return 0; // base case: n이 1이면 반복 종료
    }
    if (n % 2 == 0) {
        return 1 + countStepsToOne(n / 2); // n이 짝수인 경우
    } else {
        return 1 + countStepsToOne(3 * n + 1); // n이 홀수인 경우
    }
}

int main() {
    int n;
    cin >> n; // 입력

    // 1이 될 때까지의 반복 횟수 계산
    int steps = countStepsToOne(n);

    // 결과 출력
    cout << steps << endl;

    return 0;
}