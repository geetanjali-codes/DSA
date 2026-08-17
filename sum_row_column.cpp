#include <iostream>
using namespace std;

int main() {
    int rows = 3, cols = 4;

    int arr[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    // ---- Row-wise sum ----
    cout << "Row-wise sums:\n";
    for (int i = 0; i < rows; i++) {
        int rowSum = 0;
        for (int j = 0; j < cols; j++) {
            rowSum += arr[i][j];
        }
        cout << "Row " << i << " sum = " << rowSum << endl;
    }

    cout << endl;

    // ---- Column-wise sum ----
    cout << "Column-wise sums:\n";
    for (int j = 0; j < cols; j++) {
        int colSum = 0;
        for (int i = 0; i < rows; i++) {
            colSum += arr[i][j];
        }
        cout << "Column " << j << " sum = " << colSum << endl;
    }

    return 0;
}