#include <iostream>
using namespace std;

int factorical(int n)
{
    if (n == 0 || n == 1) return 1;
    return n * factorical(n-1);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n; cin >> n;
    cout << factorical(n);

    return 0;
}