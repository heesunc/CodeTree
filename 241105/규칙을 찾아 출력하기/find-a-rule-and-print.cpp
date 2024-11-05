#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            // 첫 번째 줄, 마지막 줄, 또는 열 번호가 줄 번호보다 작으면 별 출력
            if (i == 0 || i == n - 1 || j <= i) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}