#include <iostream>
using namespace std;

void rect(int n)
{
    int num = 1;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            // 1~9인데 9다음엔 1
            cout << num << " ";
            
            // 숫자 갱신 및 순환 처리
            num++;
            if (num > 9) num = 1; // 10이 되면 1로 초기화
        }
        cout << "\n";
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n; cin >> n;
    rect(n);

    return 0;
}