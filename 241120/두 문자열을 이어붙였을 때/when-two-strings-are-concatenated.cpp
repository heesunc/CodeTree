#include <iostream>
#include <string>
using namespace std;

int main() {
    string A, B;
    cin >> A >> B;

    // 문자열 이어붙이기
    string AB = A + B;
    string BA = B + A;

    // 두 문자열이 같은지 비교
    if (AB == BA) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}
