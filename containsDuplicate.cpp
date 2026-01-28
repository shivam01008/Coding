#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

bool containsDuplicate(vector<int>& nums) {
    unordered_set<int> seen;
    for (int n : nums) {
        if (seen.count(n)) return true;
        seen.insert(n);
    }
    return false;
}

int main() {
    vector<int> nums = {1,2,3,1};
    cout << containsDuplicate(nums) << endl; // 1 = true
}
