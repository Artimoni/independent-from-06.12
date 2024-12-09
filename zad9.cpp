#include <iostream>
#include <Windows.h>

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    const int m = 10; 
    int X[m] = { 1, 3, 2, 4, 1, 5, 3, 6, 2, 7 }; 
    int maxLength = 0; 
    int currentLength = 1; 

    for (int i = 1; i < m; i++) {
        if ((i % 2 == 1 && X[i] > X[i - 1]) || (i % 2 == 0 && X[i] < X[i - 1])) {
            currentLength++; 
        }
        else {
            if (currentLength > maxLength) {
                maxLength = currentLength;
            }
            currentLength = 2; 
        }
    }

    if (currentLength > maxLength) {
        maxLength = currentLength;
    }

    cout << "Самая длинная длина ровняется: " << maxLength << endl;

    return 0;
}