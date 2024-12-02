#include <iostream>
using namespace std;

void result(int n)
{
    if(n == 0)           // n이 0이라면, 더 이상 진행하지 않고
        return;          // 퇴각합니다.
    
    result(n - 1);
    for(int i=0; i<n; i++)
    {
        cout << "*";
    }
    cout << "\n";
    
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n; cin >> n;
    result(n);
    return 0;
}