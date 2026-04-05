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
    ListNode* reverseList(ListNode* head) {
        if(head==nullptr || head->next==nullptr) return head;
        ListNode *nxt=head->next;
        ListNode *pre=nullptr;
        while(nxt!=nullptr)
        {
            //cout<<head->val<<endl;
            head->next=pre;
            pre=head;
            head=nxt;
            nxt=head->next;

        }
        head->next=pre;
        return head;
    }
};
