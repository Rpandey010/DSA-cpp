// sum of all the elements in the array

#include <iostream>
using namespace std;

// int getSum(int arr[], int size){
//         int sum= 0;
//         for(int i=0; i<size; i++){
//             sum = sum + arr[i];

//         }
//         return sum;
//     }

// int main(){

//     int size;
//     cin>>size;

//     int num[10];  //i am saying that the size/capacity of array is 10
//     //taking input in array
//     for(int i=0; i<size; i++){
//         if(i >= 100) {
//             cout << "Cannot enter more than 100 integers." << endl;
//             break;
//         }
//         cin>>num[i];
//     }

//     cout<<"Sum of all the elements in an array: "<<getSum(num, size)<<endl;

//     return 0;
// }

int ArraySum(int ar[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + ar[i];
    }
    return sum;
}

int main()
{
    int ar[100];
    int size;
    cout << "Enter the size of array :: ";
    cin >> size;
    cout << "Enter the element of array:: ";
    for (int i = 0; i < size; i++)
    {
        cin >> ar[i];
    }
    cout << "Sum = " << ArraySum(ar, size);
}