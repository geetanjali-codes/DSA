#include <iostream>
using namespace std;

int main() {
    int rowA = 2, colA = 3; // A is 2x3
    int rowB = 3, colB = 2; // B is 3x2

    int A[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    int B[3][2] = {
        {7, 8},
        {9, 10},
        {11, 12}
    };

    // Check if multiplication is possible
    if (colA != rowB) {
        cout << "Multiplication not possible! Columns of A must equal rows of B.";
        return 0;
    }

    int C[2][2]; // result will be rowA x colB

    // Multiply
    for (int i = 0; i < rowA; i++) {           // for each row of A
        for (int j = 0; j < colB; j++) {       // for each column of B
            C[i][j] = 0;                        // start sum at 0
            for (int k = 0; k < colA; k++) {   // go through the shared dimension
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Print result
    cout << "Resultant Matrix:\n";
    for (int i = 0; i < rowA; i++) {
        for (int j = 0; j < colB; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}