#include <iostream>
using namespace std;

int main() {
    int arr[3][3];
    int arr2[3][3];

    // 첫 번째 배열 입력
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> arr[i][j];
        }
    }

    // 두 번째 배열 입력
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> arr2[i][j];
        }
    }

    // 두 배열의 같은 위치 요소끼리 곱하고 출력
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << arr[i][j] * arr2[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
