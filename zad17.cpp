#include <iostream>
#include <Windows.h>

using namespace std;

const int MAX_SIZE = 100; 

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int m, n;
    cout << "Введите размер 1-ого массива (максимум " << MAX_SIZE << "): ";
    cin >> m;
    if (m > MAX_SIZE) {
        cout << "Размер массива не должен превышать " << MAX_SIZE << endl;
        return 1; 
    }

    int A[MAX_SIZE]; 
    cout << "Введите элементы 1-ого массива в порядке возрастания: ";
    for (int i = 0; i < m; i++) {
        cin >> A[i];
    }

    cout << "Введите размер 2-ого массива (макс. " << MAX_SIZE << "): ";
    cin >> n;
    if (n > MAX_SIZE) {
        cout << "Размер массива не должен превышать " << MAX_SIZE << endl;
        return 1; 
    }

    int B[MAX_SIZE]; 
    cout << "Введите элементы 2-ого массива (по возрастанию): ";
    for (int i = 0; i < n; i++) {
        cin >> B[i];
    }

    int C[MAX_SIZE * 2]; // третий объединяющий массив
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
    for (int i = 0; i < k; i++) {
        cout << C[i] << " ";
    }
    cout << endl;

    return 0;
}