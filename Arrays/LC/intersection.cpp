#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

vector<int> findIntersection(const vector<int>& nums1, const vector<int>& nums2) {
    unordered_set<int> set1(nums1.begin(), nums1.end());
    vector<int> result;

    for (int num : nums2) {
        if (set1.count(num)) {
            result.push_back(num);
            set1.erase(num);
        }
    }

    return result;
}

int main() {
    vector<int> nums1 = {1, 2, 3, 4};
    vector<int> nums2 = {2, 4};

    vector<int> intersection = findIntersection(nums1, nums2);

    cout << "Intersection: ";
    for (int num : intersection) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
