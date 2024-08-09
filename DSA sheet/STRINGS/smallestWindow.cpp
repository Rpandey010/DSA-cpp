#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    //Function to find the smallest window in the string s consisting
    //of all the characters of string p.
    string smallestWindow (string s, string p)
    {
        int n = s.length();

        //If t is longer than s... not possible
        if(p.length() > n)
            return "";

        unordered_map<char, int> mp;

        //store the frequency of each character in t
        for(char &ch : p)
            mp[ch]++;

        //required count of char to match it
        int requiredCount = p.length();
        int i = 0, j = 0;

         int minWindowSize = INT_MAX;     //store the min window size found
         int start_i = 0;      //start index of the min window

         //Story starts, sliding the window
         while(j < n){
            char ch = s[j];

            // If the current character is in t, decrement the reqd count
            if(mp[ch] > 0)
                requiredCount--;     //reqd count decreased

            mp[ch]--;                //decrement the count of that character

            // When all charcters are matched  reqd count becomes 0 --> Shrinking stars
            while(requiredCount == 0){
                // Calculate the current window size
                int currWindowSize = j-i+1;

                // Update the minimum window size and start index if a smaller window is found
                if(minWindowSize > currWindowSize){
                    minWindowSize = currWindowSize;
                    start_i = i;
                }

                // Start shrinking the window from the left, increase the i counter
                mp[s[i]]++;

                if(mp[s[i]] > 0){
                    requiredCount++;
                }

                i++;
            }

            j++;
        }
        return minWindowSize == INT_MAX ? "" : s.substr(start_i, minWindowSize); 
    }
};

int main()
{
    // Create an instance of the Solution class
    Solution solution;

    // Test case 1
    string S = "timetopractice";
    string P = "toc";
    string result = solution.smallestWindow(S, P);
    
    // Print the result
    cout << "Smallest window containing all characters of \"" << P << "\" in \"" << S << "\": " << result << endl;

    return 0;
}