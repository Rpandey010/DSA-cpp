#include<bits/stdc++.h>
using namespace std;

bool isPrime(int num){
    if(num <= 1){
        return false;
    }
    
    for(int i = 2; i <= sqrt(num); i++){
        if(num % i == 0)
            return false;
    }
    return true;
}

int main(){
    int number;
    cout<<"Enter a number: ";
    cin>> number;

    if(isPrime(number)){
        cout<< number << " is a prime number." <<endl;
    }
    else{
        cout<< number << " is not a prime number." <<endl;
    }

    return 0;
}


Why Check Only Up to sqrt(n)?

Definition of Factors: If a number n is not prime, it can be factored into two integers: n = a * b.
Symmetry of Factors: If a * b = n, then both a and b cannot both be greater than the square root of n. 
This is because if they were, their product would exceed n. 
Thus, one of these factors must be less than or equal to the square root of n.