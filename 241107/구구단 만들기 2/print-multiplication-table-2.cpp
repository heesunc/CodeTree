#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    // 곱할 숫자 배열
    int multiples[4] = {2, 4, 6, 8};

    // 행마다 2, 4, 6, 8에 대한 결과 출력
    for (int i = 0; i < 4; i++) {
        for (int j = b; j >= a; j--) {
            cout << j << " * " << multiples[i] << " = " << j * multiples[i];
            if (j != a) cout << " / ";
        }
        cout << "\n";
    }

    return 0;
}