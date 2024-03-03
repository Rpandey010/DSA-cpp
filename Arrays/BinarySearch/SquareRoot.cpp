#include<iostream>
using namespace std;

int BS(int n){

    int s = 0;
    int e = n;
    int mid = s + (e-s)/2;
    int ans = -1;

    while(s<=e){

        int square = mid*mid;

        if(square == n){
            return mid;
        }
        if(square < n){
            ans = mid;
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}


int main(){
    int arr[6]={2, 4, 6, 8, 9, 12};

    int mySqrt= BS(144);
    cout<< "Square root of 144 is " << mySqrt <<endl;

    return 0;

}