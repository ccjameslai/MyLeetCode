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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head = new ListNode(0);
        ListNode* curr = head;
        int sum = 0, v1 = 0, v2 = 0, temp = 0;
        while (l1 || l2) {
            v1 = l1 != nullptr ? l1->val : 0;
            v2 = l2 != nullptr ? l2->val : 0;
            sum = v1 + v2 + temp;
            
            temp = 0;
            if (sum >= 10) {
                sum -= 10;
                temp = 1;
            }
            
            curr->next = new ListNode(sum);
            
            curr = curr->next;
            if (l1) {l1 = l1->next;}
            if (l2) {l2 = l2->next;}
        }
        if (temp == 1) {
            curr->next = new ListNode(1);;
        }
        return head->next;
    }
};