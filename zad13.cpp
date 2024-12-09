#include <iostream>

using namespace std;

int main() {
    int cards[5] = { 2, 3, 3, 3, 2 };
    int count[6] = { 0 };

    for (int i = 0; i < 5; i++) {
        count[cards[i]]++;
    }

    int countOf2 = 0, countOf3 = 0, countOf4 = 0, countOf5 = 0;

    for (int i = 1; i <= 5; i++) {
        if (count[i] == 5) countOf5++;
        if (count[i] == 4) countOf4++;
        if (count[i] == 3) countOf3++;
        if (count[i] == 2) countOf2++;
    }

    if (countOf5 > 0) {
        cout << 1 << endl;
    }
    else if (countOf4 > 0) {
        cout << 2 << endl;
    }
    else if (countOf3 > 0 && countOf2 > 0) {
        cout << 3 << endl;
    }
    else if (countOf3 > 0) {
        cout << 4 << endl;
    }
    else if (countOf2 == 2) {
        cout << 5 << endl;
    }
    else if (countOf2 == 1) {
        cout << 6 << endl;
    }
    else {
        cout << 7 << endl;
    }

    return 0;
}