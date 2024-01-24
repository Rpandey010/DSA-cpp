//     1
//    121
//   12321
//  1234321
// 123454321

#include<iostream>
using namespace std;

// int main(){
//     int n;
//     cin>>n;

//     int i=1;
//     while(i<=n){
//         //print 
//         int space = n-i;
//         while(space){
//             cout<<" ";
//             space=space-1;

//         }

//         //print 1st traingle
//         int j=1;
//         while(j<=i){
//             cout<<j;
//             j=j+1;
//         }

//         //print 2nd triangle
//         int start = i-1;
//         while(start){
//             cout<<start;
//             start=start-1;
//         }
//         cout<<endl;
//         i=i+1;
//     }
    

// }

int main(){
    int n;
    cin>>n;

    int i=1;
    while(i<=n){
        //printing space
        int space=n-i;
        while(space){
            cout<<" ";
            space=space-1;
        }
        //printing 1st triangle
        int j=1;
        while(j<=i){
            cout<<j;
            j=j+1;
        }
        //printing 2nd traingle
        int start=i-1;
        while(start){
            cout<<start;
            start=start-1;
        }
        cout<<endl;
        i=i+1;
    }
}