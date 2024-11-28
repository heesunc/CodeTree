#include <iostream>
using namespace std;

bool result(int M, int D)
{
    // 각 달의 일수를 배열에 저장
    int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // 유효한 월인지 확인
    if (M < 1 || M > 12) return false;

    // 해당 월의 일 수보다 작거나 같은지 확인
    return D >= 1 && D <= daysInMonth[M];
}

int main() {
    // 여기에 코드를 작성해주세요.
    int M, D; cin >> M >> D;

    if(result(M, D))
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }

    return 0;
}