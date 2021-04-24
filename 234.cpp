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
        int n=0;
        ListNode* temp = head;
        while(temp != nullptr){
            temp = temp->next;
            n++;
        }
        temp = head;
        ListNode* cur = head, *prev = nullptr;
        for(int i=0;i<n/2;i++){
            cur = cur->next;
            temp->next = prev;
            prev = temp;
            temp = cur;
        }
        if(n%2){
            cur = cur->next;    
        }
        while(prev != nullptr && cur != nullptr){
            if(prev->val != cur->val) return false;
            prev = prev->next;
            cur = cur->next;
        }
        return true;
    }
};