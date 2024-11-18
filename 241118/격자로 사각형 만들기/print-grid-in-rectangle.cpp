#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    // n x n 격자 생성
    vector<vector<int>> grid(n, vector<int>(n, 0));

    // 첫 번째 행과 열은 모두 1
    for (int i = 0; i < n; ++i) {
        grid[0][i] = 1; // 첫 행
        grid[i][0] = 1; // 첫 열
    }

    // 나머지 칸 채우기
    for (int i = 1; i < n; ++i) {
        for (int j = 1; j < n; ++j) {
            grid[i][j] = grid[i - 1][j] + grid[i][j - 1] + grid[i - 1][j - 1];
        }
    }

    // 결과 출력
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << grid[i][j];
            if (j != n - 1) cout << " "; // 마지막 열에는 공백 없음
        }
        cout << endl;
    }

    return 0;
}
