#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int n = colors.size();
        int ans = 0;

        // Case 1: Compare from leftmost house
        for (int j = n - 1; j >= 0; j--) {
            if (colors[j] != colors[0]) {
                ans = max(ans, j);
                break; // furthest found
            }
        }

        // Case 2: Compare from rightmost house
        for (int i = 0; i < n; i++) {
            if (colors[i] != colors[n - 1]) {
                ans = max(ans, (n - 1) - i);
                break; // furthest found
            }
        }

        return ans;
    }
};
