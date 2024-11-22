#include <iostream>
#include <string>
using namespace std;

// 문자열을 우측으로 한 칸 이동시키는 함수
string rotateRight(string str) {
    return str.back() + str.substr(0, str.size() - 1);
}

int main() {
    string A, B;
    cin >> A >> B;

    int n = A.size();
    for (int i = 1; i <= n; ++i) {
        A = rotateRight(A); // A를 우측으로 한 칸 이동
        if (A == B) {       // A와 B가 같다면
            cout << i << endl;
            return 0;
        }
    }

    // 일치하지 않으면 -1 출력
    cout << -1 << endl;
    return 0;
}