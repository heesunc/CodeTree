#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    float a = 5.26;
    float b = 8.27;
    float result = a * b;

    cout << fixed << setprecision(3); // 소수점 5자리까지 출력
    cout << result << "\n";

    return 0;
}