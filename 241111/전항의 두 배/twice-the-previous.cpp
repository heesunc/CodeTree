#include <iostream>
#include <vector>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a1; int a2;
    cin >> a1 >> a2;

    vector<int> A;
    A.push_back(a1);
    A.push_back(a2);

    for(int i=2; i<10; i++)
    {
        int a3 = A[i-1] + (2 * A[i-2]);
        A.push_back(a3);
    }

    for(int i : A)
    {
        cout << i << " ";
    }
    
    return 0;
}