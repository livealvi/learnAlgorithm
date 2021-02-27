// BinarySearchUsingRecursion.cpp : This file contains the 'main' function. Program execution startins and ends there.
//

#include <iostream>
using namespace std;

int BinarySearch(int totalArray[], int num, int start, int end)
{
	int mid;
	if (start > end) {
		cout << "Number is not found";
		return 0;
	}
	else {
		mid = (start + end) / 2;
		if (totalArray[mid] == num) {
			cout << "Number is found at " << mid << " index \n";
			return 0;
		}
		else if (num > totalArray[mid]) {
			BinarySearch(totalArray, num, mid + 1, end);
		}
		else if (num < totalArray[mid]) {
			BinarySearch(totalArray, num, start, mid - 1);
		}
	}
}

int main() {
	int totalArray[100], num, i, n, start, end;
	cout << "Enter the number of elements max array size[100]: ";
	cin >> n;
	cout << "Enter the sorted values: ";
	for (i = 0; i < n; i++) {
		cin >> totalArray[i];
	}
	cout << "Enter a value to be search: ";
	cin >> num;
	start = 0;
	end = n - 1;
	BinarySearch(totalArray, num, start, end);
	return 0;
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
