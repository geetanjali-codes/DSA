#include <iostream>
using namespace std;

int main() {

    int A[100][3], B[100][3], C[200][3];

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


    // Check dimensions
    if(r1 != r2 || c1 != c2) {
        cout << "Addition not possible.";
        return 0;
    }

    int i = 1, j = 1, k = 1;

    C[0][0] = r1;
    C[0][1] = c1;

    while(i <= n1 && j <= n2) {

        if(A[i][0] == B[j][0] &&
           A[i][1] == B[j][1]) {

            int sum = A[i][2] + B[j][2];

            if(sum != 0) {
                C[k][0] = A[i][0];
                C[k][1] = A[i][1];
                C[k][2] = sum;
                k++;
            }

            i++;
            j++;
        }

        else if(A[i][0] < B[j][0] ||
               (A[i][0] == B[j][0] && A[i][1] < B[j][1])) {

            C[k][0] = A[i][0];
            C[k][1] = A[i][1];
            C[k][2] = A[i][2];

            k++;
            i++;
        }

        else {
            C[k][0] = B[j][0];
            C[k][1] = B[j][1];
            C[k][2] = B[j][2];

            k++;
            j++;
        }
    }

    while(i <= n1) {
        C[k][0] = A[i][0];
        C[k][1] = A[i][1];
        C[k][2] = A[i][2];

        k++;
        i++;
    }

    while(j <= n2) {
        C[k][0] = B[j][0];
        C[k][1] = B[j][1];
        C[k][2] = B[j][2];

        k++;
        j++;
    }

    C[0][2] = k - 1;

    cout << "\nAddition of Sparse Matrices:\n";

    for(int x = 0; x < k; x++) {
        cout << C[x][0] << " "
             << C[x][1] << " "
             << C[x][2] << endl;
    }

    return 0;
}