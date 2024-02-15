#include<iostream>
using namespace std;

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int arr[5];
    cout << "Enter 5 elements for the array:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Enter element at index " << i << ": ";
        cin >> arr[i];
    }

    cout << "Enter the index positions to swap:" << endl;
    int index1, index2;
    cout << "Enter index 1: ";
    cin >> index1;
    cout << "Enter index 2: ";
    cin >> index2;

    if (index1 >= 0 && index1 < 5 && index2 >= 0 && index2 < 5) {
        swap(arr[index1], arr[index2]);

        cout << "After swapping, the array is:" << endl;
        for (int i = 0; i < 5; i++) {
            cout << "Element at index " << i << ": " << arr[i] << endl;
        }
    } else {
        cout << "Invalid index positions entered." << endl;
    }

    return 0;
}



// #include<iostream>
// using namespace std;

// void swap(int& a, int& b) {
//     int temp = a;
//     a = b;
//     b = temp;
// }

// int main() {
//     int a, b;
//     cout << "Enter the value of a: ";
//     cin >> a;
//     cout << "Enter the value of b: ";
//     cin >> b;

//     swap(a, b);

//     cout << "After swapping, the values are:" << endl;
//     cout << "a = " << a << endl;
//     cout << "b = " << b << endl;

//     return 0;
// }

