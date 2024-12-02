#include <iostream>
using namespace std;

void print(int n) {
    if (n <= 0) return; // 재귀 종료 조건
    cout << "HelloWorld" << "\n"; // 현재 호출에서 출력
    print(n - 1); // n-1로 재귀 호출
}

int main() {
    int n;
    cin >> n;
    print(n);
    return 0;
}
