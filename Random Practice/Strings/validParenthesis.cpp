#include<bits/stdc++.h>
using namespace std;
bool isValid(string s) {
    
    stack<int> st;   //main a stack to store the open bracs
    int n = s.size();

    for(int i = 0; i < n; i++){
        char currentChar = s[i];

        if(currentChar == '(' || currentChar == '[' || currentChar == '{'){
            st.push(currentChar);   //push the open brac
        }
        else{
            if(st.size() == 0) return false;     //incase we encountered a closed bracket first return not a valid parenthesis

            // else 
            char topChar = st.top();   //get the top char
            st.pop();    //and pop it

            if((currentChar == ')' and topChar == '(' ) or
               (currentChar == ']' and topChar == '[' ) or
               (currentChar == '}' and topChar == '{' )) {
                continue;
            }
            else return false;
        }
    }
    return st.empty(); 
};


int main()
{
    string s="()[{}()]";
    if(isValid(s))
    cout<<"True"<<endl;
    else
    cout<<"False"<<endl;
}