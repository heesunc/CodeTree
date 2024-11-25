#include <iostream>
using namespace std;

void gcd(int n, int m)
{
    int c=0;
    while( m != 0)
    {
        c = n % m;
        n = m;
        m = c;
    }
    cout << n;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m; cin >> n >> m;
    gcd(n, m);

    return 0;
}