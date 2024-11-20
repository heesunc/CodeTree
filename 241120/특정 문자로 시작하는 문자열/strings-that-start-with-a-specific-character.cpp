#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n; cin >> n;
    vector<string> strv(n);
    int cnt = 0;

    for(int i=0; i<n; i++)
    {
        cin >> strv[i];
    }

    char c; cin >> c;
    float avg = 0;
    for(int i=0; i<strv.size(); i++)
    {
        if(strv[i][0] == c)
        {
            cnt++;
            avg += strv[i].length();
        }
    }

    cout << fixed << setprecision(2);
    // c부터 시작하는 문자열의 개수와 이 문자열 길이의 평균 (소수점 둘째자리)
    cout << cnt << " " << avg / cnt;

    return 0;
}