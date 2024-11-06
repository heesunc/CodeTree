#include <iostream>

int main() {
    int n;
    std::cin >> n;
    int cnt = 1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i % 2 == 0) {  // 홀수 번째 줄
                std::cout << cnt << " ";
                if (j == n - 1) {
                    cnt += 2;
                } else {
                    cnt++;
                }
            } else {  // 짝수 번째 줄
                std::cout << cnt << " ";
                if (j == n - 1) {
                    cnt++;
                } else {
                    cnt += 2;
                }
            }
        }
        std::cout << std::endl;
    }

    return 0;
}