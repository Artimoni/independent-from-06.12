#include <iostream>
#include <vector>
#include <algorithm>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int m;
    cout << "Введите размер массива (2n + 1): ";
    cin >> m;

    vector<int> A(m);

    cout << "Введите элементы массива (не одинаковые): ";
    for (int i = 0; i < m; i++) {
        cin >> A[i];
    }

    sort(A.begin(), A.end());

    int median = A[m / 2];

    cout << "Медиана: " << median << endl;

    return 0;
}
