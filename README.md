# dsa-day-121   class Solution {
public:
    int maxDistance(vector<int>& colv cccors) {
        int n = colors.size();
        int ans = 0;

        // Case 1: Compare from leftmost house
        for (int j = n - 1; /**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {

        if (head == NULL || head->next == NULL)
            return NULL;

        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* prev = NULL;

        while (fast != NULL && fast->next != NULL) {
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }

        prev->next = slow->next;
        delete slow;

        return head;
    }
}; >= 0; j--) {
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
   class Solution {
public:
    int derangeCount(int n) {
        if (n == 1) return 0;
        if (n == 2) return 1;

        vector<int> dp(n+1, 0);
        dp[1] = 0;
        dp[2] = 1;

        for (int i = 3; i <= n; i++) {
            dp[i] = (i - 1) * (dp[i-1] + dp[i-2]);
        }

        return dp[n];
    }
};
