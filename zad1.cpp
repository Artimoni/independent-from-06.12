#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> binary = { 1, 0, 1, 1 }; 
    int carry = 1; 

    for (int i = binary.size() - 1; i >= 0; i--) {
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
        binary.insert(binary.begin(), 1);
    }

    cout << "Массив двоичных цифр числа M+1: ";
    for (int bit : binary) {
        cout << bit;
    }
    cout << endl;

    return 0;
}
