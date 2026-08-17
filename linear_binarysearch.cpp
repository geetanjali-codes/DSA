#include <iostream>
using namespace std;
int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int choice, key;

    cout << "1. Linear Search" << endl;
    cout << "2. Binary Search" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    cout << "Enter element to search: ";
    cin >> key;

    if (choice == 1) {
        // Linear Search
        for (int i = 0; i < 5; i++) {
            if (arr[i] == key) {
                cout << "Element found at index " << i;
                return 0;
            }
        }

        cout << "Element not found";
    }

    else if (choice == 2) {
        // Binary Search
        int low = 0;
        int high = 4;

        while (low <= high) {
            int mid = (low + high) / 2;

            if (arr[mid] == key) {
                cout << "Element found at index " << mid;
                return 0;
            }
            else if (arr[mid] < key) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }

        cout << "Element not found";
    }

    else {
        cout << "Invalid choice";
    }

    return 0;
}