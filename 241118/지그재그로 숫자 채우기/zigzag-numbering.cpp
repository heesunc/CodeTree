#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> grid(n, vector<int>(m));

    // 숫자를 채워넣기
    int num = 0;
    for (int col = 0; col < m; ++col) {
        if (col % 2 == 0) {
            // 아래로 채우기
            for (int row = 0; row < n; ++row) {
                grid[row][col] = num++;
            }
        } else {
            // 위로 채우기
            for (int row = n - 1; row >= 0; --row) {
                grid[row][col] = num++;
            }
        }
    }

    // 출력
    for (int row = 0; row < n; ++row) {
        for (int col = 0; col < m; ++col) {
            cout << grid[row][col];
            if (col != m - 1) cout << " "; // 마지막 숫자 뒤에는 공백 없음
        }
        cout << endl;
    }

    return 0;
}
