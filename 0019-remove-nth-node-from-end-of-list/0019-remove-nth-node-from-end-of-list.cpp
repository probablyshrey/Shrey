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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *temp, *temp2;
        temp=head;
        temp2=head;
        int c=0;
        while(temp!=NULL){
            c++;
            temp=temp->next;
        }
        n=c-n+1;
        c=1;
        if(n==1)
        {
            temp=head;
            head=head->next;
            delete temp;
            return head;
        }
        while((c<n-1)&&(temp2!=NULL))
        {
            temp2=temp2->next;
            c++;
        }
        temp=temp2->next;
        temp2->next=temp->next;
        delete temp;
        return head;
        
    }
};