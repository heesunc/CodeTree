#include <iostream>
#include <cmath> // pow 함수 사용
using namespace std;

int F(int n) {
    if (n < 10) // 한 자리 수일 경우
        return pow(n, 2); // n^2 계산

    // 나머지 자리들 처리
    return pow(n % 10, 2) + F(n / 10);
}

int main() {
    int n; 
    cin >> n; // 입력 받기
    cout << F(n); // 결과 출력
    return 0;
}
