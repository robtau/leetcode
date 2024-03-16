// 17.03.24
// Runtime 11 ms Beats 96.26% of users with C++
// Memory 76.02 MB Beats 48.72% of users with C++
/**
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
    ListNode* addTwoNumbers(ListNode* it1, ListNode* it2) {
        auto data = new ListNode();
        auto prev = data;
        auto quot = 0;
        while (it1 || it2 || quot) {
            auto sum = quot;
            if (it1) sum += it1->val;
            if (it2) sum += it2->val;
            auto next = new ListNode(sum % 10);
            quot = sum/10;
            prev->next = next;
            prev = prev->next;
            if (it1) it1 = it1->next;
            if (it2) it2 = it2->next;
        }
        return data->next;
    }
};
