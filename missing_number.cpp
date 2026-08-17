#include <iostream>
using namespace std;

int findMissingLinear(int arr[], int size) {
    int n = size + 1; // since array has n-1 elements, actual n = size+1

    int expectedSum = n * (n + 1) / 2;

    int actualSum = 0;
    for (int i = 0; i < size; i++) {
        actualSum += arr[i];
    }

    return expectedSum - actualSum;
}

int main() {
    int arr[] = {1, 2, 3, 4, 6, 7, 8};
    int size = 7; // n-1 elements, so n = 8

    int missing = findMissingLinear(arr, size);
    cout << "Missing number (Linear method): " << missing << endl;

    return 0;
}