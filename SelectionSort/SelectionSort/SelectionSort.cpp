// SelectionSort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void swapping(int& a, int& b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}
void display(int* array, int size) {
    for (int i = 0; i < size; i++)
        cout << array[i] << " ";
    cout << endl;
}
void selectionSort(int* array, int size) {
    int i, j, imin;
    for (i = 0; i < size - 1; i++) {
        imin = i;
        for (j = i + 1; j < size; j++)
            if (array[j] < array[imin])
                imin = j;
        swap(array[i], array[imin]);
    }
}
int main() {
    int n;
    cout << "Enter the number of elements max array size[100]: ";
    cin >> n;
    int totalArray[100];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> totalArray[i];
    }
    cout << "Array before Sorting: ";
    display(totalArray, n);
    selectionSort(totalArray, n);
    cout << "Array after Sorting: ";
    display(totalArray, n);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
