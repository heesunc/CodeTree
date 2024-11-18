#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<vector<int>> grid(n, vector<int>(n));

    // 숫자를 채워넣기
    int num = 1; // 1부터 시작
    for (int col = n - 1; col >= 0; --col) {
        if ((n - col - 1) % 2 == 0) {
            // 아래에서 위로 채우기
            for (int row = n - 1; row >= 0; --row) {
                grid[row][col] = num++;
            }
        } else {
            // 위에서 아래로 채우기
            for (int row = 0; row < n; ++row) {
                grid[row][col] = num++;
            }
        }
    }

    // 출력
    for (int row = 0; row < n; ++row) {
        for (int col = 0; col < n; ++col) {
            cout << grid[row][col];
            if (col != n - 1) cout << " "; // 마지막 숫자 뒤에는 공백 없음
        }
        cout << endl;
    }

    return 0;
}
