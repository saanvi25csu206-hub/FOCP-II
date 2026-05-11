/*In software applications such as data analytics and probability systems, combinatorial values are frequently
required. To ensure efficiency, developers avoid factorial-based solutions and use iterative logic with loops.
As a Junior Software Developer, design a C++ program to generate Pascal’s Triangle for a given number of
rows.*/
#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number of rows: ";
    cin >> n;

    for (int i = 0; i < n; i++) {

        int value = 1;
        for (int space = 0; space < n - i - 1; space++) {
            cout << " ";
        }
        for (int j = 0; j <= i; j++) {
            cout << value << " ";
            value = value * (i - j) / (j + 1);
        }

        cout << endl;
    }

    return 0;
}