#include <iostream>
#include <string>

using namespace std;

int main() {
    string a, b, c;
    cin >> a >> b >> c;

    // 문자열의 길이를 저장
    int a1 = a.length();
    int b2 = b.length();
    int c3 = c.length();

    // 가장 긴 문자열의 길이를 삼항 연산자로 계산
    int maxLen = (a1 > b2 ? (a1 > c3 ? a1 : c3) : (b2 > c3 ? b2 : c3));

    // 가장 짧은 문자열의 길이를 삼항 연산자로 계산
    int minLen = (a1 < b2 ? (a1 < c3 ? a1 : c3) : (b2 < c3 ? b2 : c3));

    // 결과 출력
    cout << maxLen - minLen << endl;

    return 0;
}
