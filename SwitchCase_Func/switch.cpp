#include<iostream>
#include<climits>
using namespace std;

int main(){
    int num=1;
    char ch='a';

    switch (ch)
    {
    case 1: cout << "FIRST" << endl;
            break;
    
    case 'a': cout << "aaaa" << endl;
            break;
    
    default: cout << "It is Default" << endl;
    }
}




// int main() {
//     int n;
//     cin >> n;

//     while (true) { // Infinite loop
//         switch (n) {
//             case 1:
//                 cout << "bla" << endl;
//                 break;
//             case 2:
//                 cout << "int" << endl;
//                 break;
//             default:
//                 cout << "default" << endl;
//         }
        
//         // This will exit the program unconditionally after the first iteration
//         exit(0);
//     }

//     return 0;
// }
