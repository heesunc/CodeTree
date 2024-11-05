#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int t; cin >> t;
    int a,b; 
    
    for(int i=0; i<t; i++)
    {
        cin >> a >> b;
        int result =0;
        // a이상 b이하 짝수들의 합
        for(int j=a; j<=b; j++)
        {
            if (j % 2 == 0)
            {
                result += j;
            }
        }
        cout << result << "\n";
    }
    return 0;
}