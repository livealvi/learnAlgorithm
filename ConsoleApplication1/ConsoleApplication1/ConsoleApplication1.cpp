// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int linearSearch(int array[], int size, int searchValue) {
    for (int i = 0; i < size; i++) {
        if (searchValue == array[i]) {
            return i;
        }
    }
    return -1;
}

int main()
{
    int totalArrray[] = {1,2,3,4,5,6,7,8,9,10,11,22,33,44,55,60};
    int userValue;
    cout << "Enter the value: ";
    cin >> userValue;
    int result = linearSearch(totalArrray, 16, userValue);
    if(result >= 0){
        cout << "The number " << totalArrray[result] << " was found at the element with index " << result << endl;
    }
    else {
        cout << "The number "<< userValue << " was not found."<<endl;
    }

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
