// CountingSort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<algorithm>
using namespace std;

void display(int* array, int Arraysize) {
    for (int i = 1; i <= Arraysize; i++)
        cout << array[i] << " ";
    cout << endl;
}
int getMax(int array[], int Arraysize) {
    int max = array[1];
    for (int i = 2; i <= Arraysize; i++) {
        if (array[i] > max)
            max = array[i];
    }
    return max;
}
void countSort(int* array, int Arraysize) {
    int output[Arraysize + 1];
    int max = getMax(array, Arraysize);
    int count[max + 1];
    for (int i = 0; i <= max; i++)
        count[i] = 0;
    for (int i = 1; i <= Arraysize; i++)
        count[array[i]]++;
    for (int i = 1; i <= max; i++)
        count[i] += count[i - 1];
    for (int i = Arraysize; i >= 1; i--) {
        output[count[array[i]]] = array[i];
        count[array[i]] -= 1;
    }
    for (int i = 1; i <= Arraysize; i++) {
        array[i] = output[i];
    }
}
int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n + 1];
    cout << "Enter elements: ";
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    cout << "Array before Sorting: ";
    display(arr, n);
    countSort(arr, n);
    cout << "Array after Sorting: ";
    display(arr, n);
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
