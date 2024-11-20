#include <iostream>
#include <string>
using namespace std;

int main() {
    string A, B;
    cin >> A >> B;

    int count = 0;
    for (size_t i = 0; i <= A.length() - B.length(); i++) {
        // 현재 위치에서 B와 비교
        if (A.substr(i, B.length()) == B) {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}
