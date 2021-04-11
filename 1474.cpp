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
    ListNode* deleteNodes(ListNode* head, int m, int n) {
        ListNode temp(0,head);
        for(auto p=&temp;p!=nullptr;){
            for(int i=0;i<m+n&&p!=nullptr;i++){
                if(i<m){
                    p=p->next;
                }
                else if(p->next!=nullptr){
                    p->next=p->next->next;
                }                    
            }
        }
        return head;
    }
};