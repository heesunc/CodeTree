#include <iostream>
using namespace std;

// 1부터 N까지 출력하는 재귀 함수
void printAscending(int n) {
    if (n == 0) return; // 종료 조건
    printAscending(n - 1); // n-1까지 재귀 호출
    cout << n << " "; // 현재 숫자 출력
}

// N부터 1까지 출력하는 재귀 함수
void printDescending(int n) {
    if (n == 0) return; // 종료 조건
    cout << n << " "; // 현재 숫자 출력
    printDescending(n - 1); // n-1까지 재귀 호출
}

int main() {
    int n;
    cin >> n;

    // 1부터 N까지 출력
    printAscending(n);
    cout << endl;

    // N부터 1까지 출력
    printDescending(n);
    cout << endl;

    return 0;
}