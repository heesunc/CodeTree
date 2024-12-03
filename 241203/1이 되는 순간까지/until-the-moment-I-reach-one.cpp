#include <iostream>
using namespace std;

int Func1(int n, int& cnt) {
    if (n == 1)
        return cnt; // 종료 조건에서 cnt 반환

    cnt++; // 호출 횟수 증가
    if (n % 2 == 0)
        return Func1(n / 2, cnt); // 재귀 호출 결과를 반환
    else
        return Func1(n / 3, cnt); // 재귀 호출 결과를 반환
}

int main() {
    int n; 
    int cnt = 0;
    cin >> n;

    cout << Func1(n, cnt); // 최종 결과 출력
    return 0;
}
