#include <iostream>
using namespace std;

int main() {
    int *arr = new int[5];

    cout << "Enter 5 numbers:" << endl;

    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    cout << "\nArray Elements:" << endl;

    for (int i = 0; i < 5; i++) {
        cout << arr[i] << endl;
    }

    delete[] arr;

    return 0;
}

