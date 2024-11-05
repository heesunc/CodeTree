#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int num = 9; // 시작 숫자

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << num;
            num--; // 1씩 감소
            if (num < 1) num = 9; // 1보다 작아지면 9로 초기화
        }
        cout << endl; // 줄 바꿈
    }

    return 0;
}