#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int arr[2][4];

    // 배열 입력
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> arr[i][j];
        }
    }

    cout << fixed << setprecision(1);  // 소수 첫째 자리까지 출력 설정

    // 가로 평균 계산 및 출력
    for (int i = 0; i < 2; i++) {
        int sum = 0;
        for (int j = 0; j < 4; j++) {
            sum += arr[i][j];
        }
        cout << static_cast<float>(sum) / 4 << " ";
    }
    cout << "\n";

    // 세로 평균 계산 및 출력
    for (int j = 0; j < 4; j++) {
        int sum = 0;
        for (int i = 0; i < 2; i++) {
            sum += arr[i][j];
        }
        cout << static_cast<float>(sum) / 2 << " ";
    }
    cout << "\n";

    // 전체 평균 계산 및 출력
    int total_sum = 0;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            total_sum += arr[i][j];
        }
    }
    cout << static_cast<float>(total_sum) / (2 * 4) << " ";

    return 0;
}
