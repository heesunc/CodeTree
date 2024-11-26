#include <iostream>
using namespace std;

bool func(int a) {
    if (a % 4 == 0) // 4로 나누어 떨어지면
    {
        // 예외적으로 100으로 나누어 떨어지되 400으로 나누어 떨어지지 않는 해는 평년
        if (a % 100 == 0 && a % 400 != 0)
            return false;
        return true; // 윤년
    }        
    return false;
}

int main() {
    int a;     cin >> a;

    cout << boolalpha << func(a);

    return 0;
}
