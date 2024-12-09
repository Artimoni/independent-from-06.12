#include <iostream>
#include <vector>
#include <Windows.h>

using namespace std;

int main() {
    SetConsoleCP(1251);          
    SetConsoleOutputCP(1251);

    int m, n;
    cout << "Введите размер первого массива: ";
    cin >> m;
    vector<int> A(m);
    cout << "Введите элементы первого массива (по возрастанию): ";
    for (int i = 0; i < m; i++) {
        cin >> A[i];
    }

    cout << "Введите размер второго массива: ";
    cin >> n;
    vector<int> B(n);
    cout << "Введите элементы второго массива (по возрастанию): ";
    for (int i = 0; i < n; i++) {
        cin >> B[i];
    }

    vector<int> C(m + n);
    int i = 0, j = 0, k = 0;

    while (i < m && j < n) {
        if (A[i] <= B[j]) {
            C[k++] = A[i++];
        }
        else {
            C[k++] = B[j++];
        }
    }

    while (i < m) {
        C[k++] = A[i++];
    }

    while (j < n) {
        C[k++] = B[j++];
    }

    cout << "Образованный отсортированный массив C: ";
    for (int i = 0; i < m + n; i++) {
        cout << C[i] << " ";
    }
    cout << endl;

    return 0;
}
