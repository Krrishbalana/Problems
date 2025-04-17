#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int matrix[5][5];
    int x = 0, y = 0;

    // Input the matrix and find the position of 1
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            cin >> matrix[i][j];
            if (matrix[i][j] == 1) {
                x = i;
                y = j;
            }
        }
    }

    // Calculate moves to reach the center (2,2)
    int moves = abs(2 - x) + abs(2 - y);
    cout << moves << endl;

    return 0;
}
