#include <iostream>
using namespace std;

int main() {
    int rows = 2, cols = 3;

    int A[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    int B[3][2]; // Transpose will have swapped dimensions: cols x rows

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            B[j][i] = A[i][j];   
        }
    }

    cout << "Transposed Matrix:\n";
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            cout << B[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}