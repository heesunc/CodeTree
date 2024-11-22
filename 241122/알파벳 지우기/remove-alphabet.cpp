#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    vector<string> a(2);
    int sum = 0;
    int num = 0;

    for(int i=0; i<2; i++)
    {
        cin >> a[i];

        for(char c : a[i])
        {
            if (isalpha(c))
            {            }
            else
            {
                str += c;
                num = stoi(str);
            }
        }
        sum += num;
        str = "";
    }
    cout << sum;

    return 0;
}