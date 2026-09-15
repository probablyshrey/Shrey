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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* temp=head;
        int c=0;
        while(temp!=NULL)
        {
            temp=temp->next;
            c++;
        }
        int v[c];
        c=0;
        ListNode* temp2=head;
        ListNode* temp3=head;
        while(temp2!=NULL)
        {
            v[c]=(temp2->val);
            temp2=temp2->next;
            c++;
        }
        int t=v[c-k];
        v[c-k]=v[k-1];
        v[k-1]=t;
        for(t=0; t<c; t++)
        {
            temp3->val=v[t];
            temp3=temp3->next;
        }
        return head;
    }
};