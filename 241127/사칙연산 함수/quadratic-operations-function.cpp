#include <iostream>
using namespace std;

int sum(int a, int c)
{
    return a+c;
}

int sub(int a, int c)
{
    return a-c;
}

int div2(int a, int c)
{
    return a/c;
}

int mul(int a, int c)
{
    return a*c;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a, c; char o;
    cin >> a >> o >> c;

    cout << a << " " << o << " " << c << " = ";
    if (o == '+') cout << sum(a,c);
    else if (o == '-') cout << sub(a,c);
    else if (o == '/') cout << div2(a,c);
    else if (o == '*') cout << mul(a,c);
    else cout << "False";

    return 0;
}