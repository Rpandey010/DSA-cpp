#include<iostream>
using namespace std;

int main(){

    for(int i=1; i<=3; i++){

        cout<< "Hiii Navy" <<endl;
        cout<< "Hello Navy" <<endl;
        continue;

        cout<< "Reply toh karde" <<endl; //due to the above continue this line becomes unreachable 
    }

}