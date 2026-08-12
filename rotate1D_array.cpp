#include <iostream>
using namespace std;

int main()
{
    int arr[10];
    int n, k, choice;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter K: ";
    cin >> k;

    k = k % n;

    cout << "\n1. Left Rotation\n";
    cout << "2. Right Rotation\n";
    cout << "Enter your choice: ";
    cin >> choice;

    if(choice == 1)
    {
        // Left rotation
        for(int r = 0; r < k; r++)
        {
            int first = arr[0];

            for(int i = 0; i < n - 1; i++)
            {
                arr[i] = arr[i + 1];
            }

            arr[n - 1] = first;
        }

        cout << "Array after left rotation: ";
    }
    else if(choice == 2)
    {
        // Right rotation
        for(int r = 0; r < k; r++)
        {
            int last = arr[n - 1];

            for(int i = n - 1; i > 0; i--)
            {
                arr[i] = arr[i - 1];
            }

            arr[0] = last;
        }

        cout << "Array after right rotation: ";
    }
    else
    {
        cout << "Invalid choice.";
        return 0;
    }

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}