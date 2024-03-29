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
ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
       ListNode *h1=head ,*h2=head;
        
        while(n--)
        {
            h1=h1->next;            
        }
        if(!h1)return h2->next;
        
        while((h1->next))
        {
            h1=h1->next;
            h2=h2->next;
        }
        
        h2->next=h2->next->next;
        return head;
    }
};