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
private:
    void mergeLists(ListNode*& l1, ListNode*& l2){
        ListNode* head = new ListNode(0,l1);
        ListNode* temp = head;
        while(l1 && l2){
            if(l1->val < l2->val){
                temp -> next = l1;        
                l1 = l1 ->next;
            }
            else{
                temp->next = l2;
                l2 = l2->next;
            }
            temp = temp->next;
        }
        temp -> next = (l1)?l1:l2;
        l1 = head->next;
    }
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int n = lists.size();
        if(n == 0) return nullptr;
        while(n-- > 1){
            ListNode* &back = lists.back();
            ListNode* &merge = lists[lists.size()-2];
            mergeLists(merge,back);
            lists.pop_back();            

        }
        return lists.front();
    }
};