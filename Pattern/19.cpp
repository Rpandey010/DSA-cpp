// 1 2 3 4 5 5 4 3 2 1 
// 1 2 3 4 * * 4 3 2 1 
// 1 2 3 * * * * 3 2 1 
// 1 2 * * * * * * 2 1 
// 1 * * * * * * * * 1 

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     n>>n;

//     int i=1;
//     while(i<=n){
//         //1st traingle

//         //2nd traingle
//         //3rd traingle
//     }
// }

#include <iostream>
using namespace std;
int main()
{
    int n, i = 1;
    cin >> n;

    // first triangle

    while (i <= n)
    {
        int j = 1;
        while (j <= n - i + 1)
        {
            cout << j << " ";
            j = j + 1;
        }

        // second triangle(half of stars ke liye)

        int star1 = i - 1;
        while (star1)
        {
            cout << "*" << " ";
            star1 = star1 - 1;
        }

        // third triangle(rest of stars ke liye)

        int star2 = i - 1;
        while (star2)
        {
            cout << "*" << " ";
            star2 = star2 - 1;
        }

        // last triangle

        int start = j - 1;
        while (start)
        {
            cout << start << " ";
            start = start - 1;
        }

        cout << endl;
        i = i + 1;
    }
}