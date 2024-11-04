#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    float a; cin >> a;
    float result = a + 1.5;

    cout << fixed << setprecision(2);
    cout << result << "\n";

    return 0;
}