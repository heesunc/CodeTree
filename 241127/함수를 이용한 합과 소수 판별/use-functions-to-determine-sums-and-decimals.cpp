#include <iostream>
#include <vector>
using namespace std;

int result(int a, int b) {
    vector<int> prime;
    for (int i = a; i <= b; i++) {
        if (i < 2) continue; // 2보다 작은 숫자는 소수가 아님
        bool isPrime = true; // 소수인지 판단하는 변수
        for (int j = 2; j * j <= i; j++) { // i의 제곱근까지만 검사
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            prime.push_back(i); // 소수일 경우 합산
        }
    }

    int cnt = 0;
    for(int i=0; i<prime.size(); i++)
    {
        if(((prime[i] % 10) + (prime[i] / 10)) % 2 == 0)
        {
            cnt++;
        }
    }
    return cnt;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b; cin >> a>> b;
    cout << result(a,b);
    return 0;
}