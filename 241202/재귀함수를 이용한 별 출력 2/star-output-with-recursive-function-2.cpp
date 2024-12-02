#include <iostream>
using namespace std;

void printStars(int n, int direction) {
    if (n == 0) return; // 종료 조건

    if (direction == 1) { // 역방향 출력
        for (int i = 0; i < n; i++) cout << "* ";
        cout << "\n";
        printStars(n - 1, direction);
    } else { // 정방향 출력
        printStars(n - 1, direction);
        for (int i = 0; i < n; i++) cout << "* ";
        cout << "\n";
    }
}

int main() {
    int n;
    cin >> n;

    printStars(n, 1); // 역방향 출력
    printStars(n, 0); // 정방향 출력

    return 0;
}
