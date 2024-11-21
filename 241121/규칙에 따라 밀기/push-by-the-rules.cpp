#include <iostream>
#include <string>
using namespace std;

int main() {
    string A, commands;
    cin >> A >> commands;

    for (char cmd : commands) {
        if (cmd == 'L') {
            // 왼쪽 이동: 첫 번째 문자를 떼어내어 뒤에 붙임
            A = A.substr(1) + A[0];
        } else if (cmd == 'R') {
            // 오른쪽 이동: 마지막 문자를 떼어내어 앞에 붙임
            A = A[A.size() - 1] + A.substr(0, A.size() - 1);
        }
    }

    cout << A << endl;
    return 0;
}
