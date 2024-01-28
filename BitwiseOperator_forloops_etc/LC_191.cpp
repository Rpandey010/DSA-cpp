// 191. Number of 1 Bits

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"enter the number in binary: "<<endl;
//     cin>>n;

//     int count =0;
//     while(n!=0){

//         // checking the last bit
//         if(n&1){
//             count++;
//         }
//         n=n>>1;
//     }
//     cout<<count<<endl;
// }


#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number: " << endl;
    cin >> n;

    int count = 0;
    while (n != 0) {
        // checking the last bit
        if (n & 1) {
            count++;
        }
        n = n >> 1;
    }

    cout << "Number of 1 bits: " << count << endl;

    return 0;
}
