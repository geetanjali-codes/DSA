#include <iostream>
using namespace std;

int main() {

    int A[100][3], B[100][3], C[100][3];

    int r1, c1, n1;
    int r2, c2, n2;

    cout << "Enter rows, columns and non-zero elements of Matrix A: ";
    cin >> r1 >> c1 >> n1;

    A[0][0] = r1;
    A[0][1] = c1;
    A[0][2] = n1;

    cout << "Enter triplets of Matrix A:\n";

    for(int i = 1; i <= n1; i++) {
        cin >> A[i][0] >> A[i][1] >> A[i][2];
    }


    cout << "\nEnter rows, columns and non-zero elements of Matrix B: ";
    cin >> r2 >> c2 >> n2;

    B[0][0] = r2;
    B[0][1] = c2;
    B[0][2] = n2;

    cout << "Enter triplets of Matrix B:\n";

    for(int i = 1; i <= n2; i++) {
        cin >> B[i][0] >> B[i][1] >> B[i][2];
    }


    // Check multiplication condition
    if(c1 != r2) {
        cout << "Multiplication not possible.";
        return 0;
    }

    int k = 1;

    C[0][0] = r1;
    C[0][1] = c2;

    // Check every possible position of result
    for(int i = 0; i < r1; i++) {

        for(int j = 0; j < c2; j++) {

            int sum = 0;

            for(int a = 1; a <= n1; a++) {

                if(A[a][0] == i) {

                    for(int b = 1; b <= n2; b++) {

                        if(B[b][0] == A[a][1] &&
                           B[b][1] == j) {

                            sum += A[a][2] * B[b][2];
                        }
                    }
                }
            }

            if(sum != 0) {
                C[k][0] = i;
                C[k][1] = j;
                C[k][2] = sum;

                k++;
            }
        }
    }

    C[0][2] = k - 1;

    cout << "\nMultiplication of Sparse Matrices:\n";

    for(int i = 0; i < k; i++) {
        cout << C[i][0] << " "
             << C[i][1] << " "
             << C[i][2] << endl;
    }

    return 0;
}