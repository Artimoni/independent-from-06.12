#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
    vector<int> cards = { 2, 3, 3, 3, 2 };

    map<int, int> cardCount;
    for (int card : cards) {
        cardCount[card]++;
    }

    int countOf2 = 0, countOf3 = 0, countOf4 = 0, countOf5 = 0;
    for (auto pair : cardCount) {
        if (pair.second == 5) countOf5++;
        if (pair.second == 4) countOf4++;
        if (pair.second == 3) countOf3++;
        if (pair.second == 2) countOf2++;
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
