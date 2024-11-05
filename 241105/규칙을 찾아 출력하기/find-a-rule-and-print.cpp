#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            // n이 1 이하일 때는 단순히 '*' 하나만 출력
            if (n <= 1) {
                cout << "* ";
            } else {
                // i와 j가 모두 0이 아니고, n-1도 아니며, i <= j인 경우 공백 출력
                if (i != 0 && j != 0 && i != n - 1 && j != n - 1 && i <= j) {
                    cout << "  ";
                } else {
                    cout << "* ";
                }
            }
        }
        cout << endl; // 줄 바꿈
    }

    return 0;
}