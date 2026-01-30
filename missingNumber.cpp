#include <vector>
using namespace std;

class missingNumber {
public:
    int missingNumbers(vector<int>& nums) {
        int n = nums.size();
        int expected = n * (n + 1) / 2;
        int actual = 0;

        for (int x : nums) {
            actual += x;
        }

        return expected - actual;
    }
};
//Input:  nums = [3,0,1]
//Output: 2
