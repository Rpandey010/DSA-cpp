#include <iostream>
using namespace std;

// We can initialize the array with any value by using the fill_n command
int main(){
    int ar[10];
    fill_n(ar, 10, 1);

    for (int i = 0; i <= 10; i++){
        cout << ar[i] << endl;
    }
}