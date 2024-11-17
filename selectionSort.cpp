// Selection Sort

#include <iostream>

using namespace std;

void selectionSort(int arr[], int n) {

    for (int i = 0; i < n - 1; i++) {

        // Find the minimum element in the unsorted part

        int min_index = i;

        for (int j = i + 1; j < n; j++) {

            if (arr[j] < arr[min_index]) {

                min_index = j;

            }

        }
        swap(arr[min_index], arr[i]);

    }

}

int main() {

    int array[] = {64, 25, 12, 22, 11};

    int n = sizeof(array) / sizeof(array[0]);

    selectionSort(array, n);

    cout << "Sorted array: \n";

    for (int i = 0; i < n; i++)

        cout << array[i] << " ";

    return 0;

}