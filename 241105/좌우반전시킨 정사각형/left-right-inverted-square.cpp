#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cin >> n;

    // 정사각형 배열을 생성하고 각 값들을 계산하여 좌우반전 출력
    for (int i = 1; i <= n; i++) {
        for (int j = n; j >= 1; j--) {
            cout << i * j << " ";
        }
        cout << endl;
    }

    return 0;
}