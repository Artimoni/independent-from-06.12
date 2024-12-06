#include <iostream>
#include <vector>
#include <Windows.h>

using namespace std;

int main() {
    SetConsoleCP(1251);          
    SetConsoleOutputCP(1251);
    vector<int> X = { 1, 3, 2, 4, 3, 5, 4, 6, 2 };

    int n = X.size(); 
    int maxLength = 0; 
    int currentLength = 1; 

    for (int i = 1; i < n; i++) {
        if ((i % 2 == 1 && X[i] < X[i - 1]) || (i % 2 == 0 && X[i] > X[i - 1])) {
            currentLength++;
        }
        else {
            maxLength = max(maxLength, currentLength);
            currentLength = 1;
        }
    }

    maxLength = max(maxLength, currentLength);

    cout << "Длина самой длинной пилообразной последовательности: " << maxLength << endl;

    return 0;
}
