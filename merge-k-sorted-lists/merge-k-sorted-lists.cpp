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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<pair<int,int>> pq;
        for(int i = 0; i < lists.size(); ++i){
            if(lists[i] == nullptr)
                continue;
            pq.push(make_pair(-lists[i]->val,i));
        }
        ListNode* res = new ListNode();
        ListNode* tail = res;
        while(!pq.empty()){
            auto top = pq.top();
            pq.pop();
            tail->next = lists[top.second];
            lists[top.second] = lists[top.second]->next;
            if(lists[top.second]!=nullptr)
                pq.push(make_pair(-lists[top.second]->val,top.second));
            tail = tail->next;
        }
        return res->next;
    }
};