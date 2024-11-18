#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int col = 1; col <= n; ++col) {
        for (int row = 0; row < n; ++row) {
            cout << col + row * n;
            if (row != n - 1) cout << " ";
        }
        cout << endl;
    }

    return 0;
}
