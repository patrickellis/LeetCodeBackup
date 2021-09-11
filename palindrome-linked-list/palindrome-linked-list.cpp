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
        stack<int> s;
        int n = 0;
        ListNode* temp = head;
        while(temp){
            temp = temp->next;
            ++n;
        }
        int mid = n/2;
        bool oddCount = (n % 2 == 0)?false:true;
        for(int i = 0; i < n; ++i){
            if(oddCount && i == mid){
                head = head->next;
                continue;
            }
            if(i < mid){
                s.push(head->val);
            }
            else{
                if(head->val != s.top())
                    return false;
                s.pop();
            }
            head = head->next;
        }
        return true;
    }
};