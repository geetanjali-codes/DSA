#include<iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter size of matrix: ";
    cin >> n;

    int arr[n][n];

    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cout << "Enter element [" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }

        for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j] <<" ";
        }
        cout<<endl;
    }

    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {

            if(arr[i][j] != arr[j][i]) {
                cout << "The matrix is not symmetric.";
                return 0;
            }
        }
    }

    cout << "The matrix is symmetric.";

    return 0;
}