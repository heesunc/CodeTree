#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    char c; cin >> c;
    char result;
    if (c == 'a')
    {
        result = 'z';
    }
    else
    {
        result = c - 1;
    }
    
    cout << result;
    return 0;
}