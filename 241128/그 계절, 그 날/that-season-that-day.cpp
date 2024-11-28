#include <iostream>
#include <string>
using namespace std;

bool year(int y)
{
    //단, 윤년(2월이 29일까지 있는 해)의 조건은 다음과 같습니다.

    /*4의 배수라면 윤년입니다.
    4의 배수이면서 100의 배수라면 윤년이 아닙니다.
    4의 배수이면서 100의 배수지만 또한 400의 배수라면 윤년입니다.
    나머지 경우에는 윤년이 아닙니다.*/

    if (y % 400 == 0) {
        return true; // 400의 배수 → 윤년
    }
    if (y % 100 == 0) {
        return false; // 100의 배수 → 평년
    }
    if (y % 4 == 0) {
        return true; // 4의 배수 → 윤년
    }
    return false; // 나머지 경우 → 평년
}

// 3~5 봄, 6~8 여름, 9~11 가을, 12~2 겨울
bool month(int y, int m, int d)
{
    int daysInMonth[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    // 윤년인 경우 2월을 29일로 설정
    if (year(y)) {
        daysInMonth[2] = 29;
    }

    // 월과 일을 체크
    if (m >= 1 && m <= 12 && d >= 1 && d <= daysInMonth[m]) {
        return true;
    }
    else {
        return false;
    }
}

string result(int m)
{
    if (month)
    {
        switch (m)
        {
            case 3 :
            case 4 :
            case 5 :
                return "Spring";
            case 6 :
            case 7 :
            case 8 :
                return "Summer";
            case 9 :
            case 10 :
            case 11 :
                return "Fall";
            case 12 :
            case 1 :
            case 2 :
                return "Winter";
        }
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int y, m, d; cin >> y >> m >> d;

    // 윤년 여부 확인
    bool isLeapYear = year(y);

    // 날짜 유효성 확인
    if (month(y, m, d)) {
        // 유효한 날짜라면 계절 출력
        cout << result(m) << endl;
    }
    else {
        cout << -1 << endl;
    }

    return 0;
}