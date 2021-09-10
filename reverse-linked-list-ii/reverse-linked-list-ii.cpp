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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* dummy = new ListNode(0), *prev = dummy;
        dummy->next = head;
        // position prev pointer to one before start of reversed list        
        for(int start = 0; start < left-1; ++start)
            prev = prev->next;
        ListNode* cur = prev->next;
        for(int i = 0; i < right-left; ++i){
            ListNode* temp = prev->next;
            prev -> next = cur -> next;
            cur -> next = cur -> next -> next;
            prev -> next -> next = temp;
        }
        return dummy->next;
    }
};