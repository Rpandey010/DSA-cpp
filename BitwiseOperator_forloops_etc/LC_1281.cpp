//Leetcode question
// 1281. Subtract the Product and Sum of Digits of an Integer 

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the number: "<<endl;
    cin>>n;

    int prod=1;
    int sum=0;

    while(n!=0){

        int digit = n%10;
        prod =prod * digit;
        sum =sum + digit;

        n= n/10;
    }
    int answer=prod-sum;
    cout<<answer<<endl;
}