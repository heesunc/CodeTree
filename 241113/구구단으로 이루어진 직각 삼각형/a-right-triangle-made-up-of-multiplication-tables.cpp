#include <iostream>
using namespace std;

void printTriangleGugudan(int n) {
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n - i + 1; ++j) {
            cout << i << " * " << j << " = " << i * j;
            if (j != n - i + 1) {
                cout << " / "; // 각 곱셈 결과를 '/'로 구분
            }
        }
        cout << endl; // 줄바꿈
    }
}

int main() {
    int n;
    cin >> n;
    if (n >= 1 && n <= 9) {
        printTriangleGugudan(n);
    }
    return 0;
}
