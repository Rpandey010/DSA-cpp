#include<iostream>
using namespace std;

// int main(){
//     int a, b =1;
//     a =10;
//     if(++a){
//         cout<<b;
//     }
//     else{
//         cout<<++b;
//     }
// }


// int main(){
//     int a=1;
//     int b=2;

//     if(a-- > 0 && ++b >2){
//         cout<<"Stage2 -Inside If "<<endl;
//     }
//     else{
//         cout<<"Stage2 -Inside else";
//     }
//     cout<< a<< " "<<b<<endl;
// }


// int main(){
//     int a =3;
//     cout<<(25*(++a));
// }


int main(){
    int a=1;
    int b= a++;
    int c= ++a;

    cout<<b<<endl;
    cout<<c<<endl;
}