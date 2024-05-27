#include <iostream>
#include <vector>
using namespace std;

bool isPossibleSol(vector<int> arr, int n, int m, int mid){
    int studentCount = 1;
    int pageSum = 0;  //start me zero rahega, dheere dheere condition ke hisaab se change hoga

    //for loop
    for(int i=0; i<n; i++){
        //we alot more pages to 1 student when its current pagesum is less than or equals to mid
        // 10 20 30 40
        // cuurent pagSum = 0, 2nd iteration= 0+10=20, 3rd= 20+30=40....
        // say mid = 50, in 4th iteration pagSum = 40+40 > mid, we put a barrier and go for the next student..
        if(pageSum + arr[i] <=mid){
            pageSum += arr[i];
        }
        // next student 
        else{
            studentCount ++;
            if(studentCount > m || arr[i]>mid){  // agar studentCount org student count se jada ho and current element is bigger than mid
                return false;
            }
            pageSum = arr[i];
        }
    }
    return true;
}


int allocateBook(vector<int> arr, int n, int m)
{ // n: no. of books, m: no. of students
    int s = 0;
    int sum = 0;
    
    for(int i=0; i<n; i++){
        sum += arr[i];
    }

    int e = sum;
    int ans =-1;
    int mid = s + (e-s)/2;

    while(s<=e){
        if (isPossibleSol(arr, n, m, mid)){
            ans = mid;
            e = mid -1;
        }
        else{
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}



int main(){
    vector<int> arr = {10, 20, 30, 40, 50};
    int n = arr.size();
    int m = 2;  //2 students

    int result = allocateBook(arr, n , m);
    cout<<"The maximum number of pages a student has to read is:  "<<result<<endl;

    return 0;
}