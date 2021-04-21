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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode temp(0, head);
        ListNode* tail = &temp;
        while(tail!=nullptr){
            while(tail->next !=nullptr && tail->next->val == val){
                tail->next = tail->next->next;
            }
            tail = tail->next;
        }
        return temp.next;
    }
};