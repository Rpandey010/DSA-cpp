#include<iostream>
#include <vector>
#include <map>
#include <set>
using namespace std;

bool uniqueOccurrences(vector<int>& arr) {
    map<int, int> count;
    for (int num : arr) {
        count[num]++;
    }
    
    set<int> freq;
    for (auto& kv : count) {
        if (!freq.insert(kv.second).second) {
            return false;
        }
    }
    
    return true;
}

int main(){
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    vector<int> arr(size);
    cout << "Enter the elements of the array: ";
    for(int i=0; i<size; i++){
        cin >> arr[i];
    }

    bool uniqueElement = uniqueOccurrences(arr);
    cout << "The uniqueness of occurrences: " << (uniqueElement ? "true" : "false") << endl;

    return 0;
}
