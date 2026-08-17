#include <iostream>
using namespace std;

int main() {
    char str1[50] = "Hello, "; // must be big enough to hold both!
    char str2[] = "World!";

    // Find the end of str1 (where the null character '\0' is)
    int i = 0;
    while (str1[i] != '\0') {
        i++;
    }

    // Now copy str2 into str1, starting right after str1 ends
    int j = 0;
    while (str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
    }
    str1[i] = '\0'; // don't forget to close the string!

    cout << "Concatenated string: " << str1 << endl;
    return 0;
}