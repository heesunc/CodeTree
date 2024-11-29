#include <iostream>
#include <string>
using namespace std;

string str1, str2;

// 부분 문자열 시작 인덱스를 반환하는 함수
int result(string& A, string& B) {
    int n1 = A.size();
    int n2 = B.size();

    for (int i = 0; i <= n1 - n2; ++i) {
        bool isMatch = true;

        for (int j = 0; j < n2; ++j) {
            if (A[i + j] != B[j]) {
                isMatch = false;
                break;
            }
        }
        if (isMatch) {
            return i; // 부분 문자열의 시작 인덱스 반환
        }
    }
    return -1; // 부분 문자열이 존재하지 않음
}

int main() {
    // 입력 받기
    cin >> str1 >> str2;

    // 부분 문자열 시작 인덱스 확인
    int index = result(str1, str2);

    // 결과 출력
    cout << index << endl;

    return 0;
}
