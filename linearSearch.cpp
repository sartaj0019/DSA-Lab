#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n =10;

    cout << "Size of array is: " << n << endl;

    int key;
    cout << "Enter the key to search: ";
    cin >> key;

    int i = 0;
    while (i < n) {
        if (key == arr[i]) {
            cout << "Key found at index " << i << endl;
            return 0; // Exit after finding the key
        }
        i++;
    }

    // If key is not found
    cout << "Key not found" << endl;

    return 0;
}