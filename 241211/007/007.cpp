#include <iostream>
#include <string> // string을 사용하기 위해 필요
using namespace std;

class Secret {
public:
    string sc; // 비밀번호
    char L;    // 미팅 장소
    int time;  // 시간

    // 생성자: 객체를 생성할 때 초기화
    Secret(string sc, char L, int time) {
        this->sc = sc;   // 비밀번호 초기화
        this->L = L;     // 미팅 장소 초기화
        this->time = time; // 시간 초기화
    }
};

int main() {
    string sc;  // 비밀번호를 저장할 변수
    char L;     // 미팅 장소를 저장할 변수
    int time;   // 시간을 저장할 변수

    // 사용자 입력 받기
    cin >> sc >> L >> time;

    // Secret 객체 생성
    Secret secret1 = Secret(sc, L, time);

    // 출력
    cout << "secret code : " << secret1.sc << endl;  // 비밀번호 출력
    cout << "meeting point : " << secret1.L << endl; // 미팅 장소 출력
    cout << "time : " << secret1.time << endl;       // 시간 출력

    return 0;
}