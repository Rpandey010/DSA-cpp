#include<iostream>
using namespace std;

// Without functions



// int main(){
//     int a, b;
//     cin>>a>>b;

//     int ans=1;
//     for(int i=1; i<=b; i++){
//         ans = ans * a;
//     }

//     cout<<"Answer is "<< ans <<endl;

//     //another time
//     int c, d;
//     cin>>c>>d;

//     ans=1;
//     for(int i=1; i<=d; i++){
//         ans = ans * c;
//     }

//     cout<<"Answer is "<< ans <<endl;

//     return 0;

// }



// Using Function (code become shorter)

// int power(int a, int b){

//     int ans=1;
//     for(int i=1; i<=b; i++){
//         ans = ans * a;
//     }
//     return ans;
// }

// int main(){
//     int a, b;
//     cin>>a>>b;

//     int answer= power(a, b);

//     cout<<"Answer is "<<answer<<endl;

//     //another time
//     int c, d;
//     cin>>c>>d;

//     answer= power(c, d);

//     cout<<"Answer is "<<answer<<endl;

//     return 0;
// }

// We can make the above code more shorter using function

int power(){
    int a, b;
    cin >> a>> b;

    int ans=1;
    for(int i=1; i<=b; i++){
        ans = ans * a;
    }
    return ans;
}

int main(){

    cout << "Answer is "<< power() << endl;
    cout << "Answer is "<< power() << endl;
    cout << "Answer is "<< power() << endl;

    return 0;
}