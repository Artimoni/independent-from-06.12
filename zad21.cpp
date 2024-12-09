#include <iostream>
#include <windows.h>

using namespace std;

const int MAX_SIZE = 100;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int m;
    cout << "Введите размер массива (число должно быть нечётным и не превышать " << MAX_SIZE << "): ";
    cin >> m;

    if (m % 2 == 0 || m > MAX_SIZE) {
        cout << "Не соответствие условиям" << endl;
        return 1;
    }

    int A[MAX_SIZE];

    cout << "Введите элементы массива: ";
    for (int i = 0; i < m; i++) {
        cin >> A[i];
    }

    for (int i = 0; i < m - 1; i++) {
        for (int j = 0; j < m - 1 - i; j++) {
            if (A[j] > A[j + 1]) {
                int temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }

    int median = A[m / 2];

    cout << "Медиана: " << median << endl;

    return 0;
}