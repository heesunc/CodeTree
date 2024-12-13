#include <iostream>
#include <string> // string을 사용하기 위해 필요
using namespace std;

class nextlevel {
public:
    string next;
    int level;

    // 생성자: 객체를 생성할 때 초기화
    nextlevel(string next = "", int level = 0) {
        this->next = next;
        this->level = level;
    }
};

int main() {
    string next = "codetree";
    int level = 10;

    nextlevel nextlevel1 = nextlevel(next, level);
    cout << "user " << nextlevel1.next << " lv " << nextlevel1.level << "\n";

    nextlevel nextlevel2 = nextlevel();
    string a; int b; cin >> a >> b;
    nextlevel2.next = a;
    nextlevel2.level = b;

    cout << "user " << nextlevel2.next << " lv " << nextlevel2.level << "\n";
    return 0;
}