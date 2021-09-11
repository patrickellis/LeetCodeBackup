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
    bool isPalindrome(ListNode* head) {
        int n = 0;
        ListNode* temp = head;
        while(temp){
            temp = temp->next;
            ++n;
        }
        // reset temp
        temp = head;
        ListNode* prev = nullptr, *curr = head;
        // create reversed linked list for first n/2 elements 
        for(int i = 0; i < n/2; ++i){
            curr = curr->next;
            temp->next = prev;
            prev = temp;
            temp = curr;
        }
        if(n % 2 == 1)
            curr = curr->next;
        while(curr != nullptr && prev != nullptr){
            if(curr->val != prev->val) 
                return false;
            curr = curr->next;
            prev = prev->next;
        }
        return true;
    }
};