#include <vector>
#include <unordered_map>
using namespace std;

class containsNearbyDuplicate {
public:
    bool containsNearbyDuplicat(vector<int>& nums, int k) {
        unordered_map<int, int> lastSeen;

        for (int i = 0; i < nums.size(); i++) {
            if (lastSeen.count(nums[i]) && i - lastSeen[nums[i]] <= k) {
                return true;
            }
            lastSeen[nums[i]] = i;
        }

        return false;
    }
};
