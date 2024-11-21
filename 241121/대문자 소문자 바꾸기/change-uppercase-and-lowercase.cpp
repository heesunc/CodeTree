#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string str;
    cin >> str;

    for (char c : str) {
        if (islower(c)) {
            cout << static_cast<char>(toupper(c)); // 명시적으로 char로 변환
        } else if (isupper(c)) {
            cout << static_cast<char>(tolower(c));
        }
    }

    return 0;
}
