#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    // n x n 크기의 격자를 0으로 초기화
    vector<vector<int>> grid(n, vector<int>(n, 0));

    // m개의 점 입력 받기
    for (int i = 0; i < m; i++) {
        int row, col;
        cin >> row >> col;
        // 점의 크기는 행 번호와 열 번호의 곱
        grid[row - 1][col - 1] = row * col;
    }

    // 격자 출력
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
