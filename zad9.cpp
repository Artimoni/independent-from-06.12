#include <iostream>

using namespace std;

int main() {
    int binary[4] = { 1, 0, 1, 1 };
    int size = 4; 
    int carry = 1; 

    for (int i = size - 1; i >= 0; i--) {
        binary[i] += carry;
        if (binary[i] == 2) {
            binary[i] = 0;
            carry = 1;
        }
        else {
            carry = 0;
            break;
        }
    }

    if (carry == 1) {
        for (int i = size; i > 0; i--) {
            binary[i] = binary[i - 1];
        }
        binary[0] = 1; 
        size++; 
    }

    cout << "Массив двоичных цифр числа M+1: ";
    for (int i = 0; i < size; i++) {
        cout << binary[i];
    }
    cout << endl;

    return 0;
}