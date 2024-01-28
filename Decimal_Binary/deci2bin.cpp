#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cout<<" Enter the decimal number: ";
    cin>>n;

    float ans =0;  //facing issue here with int so used float!!!
    int i =0;

    while(n!=0){

        int bit = n & 1;

        ans= (bit * pow(10, i)) + ans;
        n = n>>1;
        i++;
    }
    cout<<" Binary representation is: " << ans << endl;
}