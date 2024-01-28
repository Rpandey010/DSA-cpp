#include<iostream>
using namespace std;

// int main(){

//     for(int i=0; i<=5; i++){
//         cout<< i <<" ";
//     }
// }

// output : 0 1 2 3 4 5 

// int main(){
//     for(int i=0; i<=5; i--){
//         cout<< i <<" ";
//         i++;
//     }
// }

// output : infinite 0

// int main(){

//     for(int i=0; i<=15; i+=2){
//         cout<< i <<" ";

//         if(i&1){
//             continue;
//         }
//         i++;
//     }
// }

// Output : 0 3 5 7 9 11 13 15 

// int main(){
//     for(int i=0; i<5; i++){
//         for(int j=i; j<=5; j++){
//             cout<<i<<" ";
//         }
//     }
// }

// Output : 0 0 0 0 0 0 1 1 1 1 1 2 2 2 2 3 3 3 4 4


int main(){
    for(int i=0; i<5; i++){
        for(int j=i; j<=5; j++){
            if(i+j == 10){
                break;
            }
            cout<<i<<" "<<j <<endl;
        }
    }
}