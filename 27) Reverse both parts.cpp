/*
Definition for singly Link List Node
struct Node
{
    int data;
    struct Node *next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};
*/


class Solution
{
public:
   
    Node *reverse(Node *head, int k)
    {
        Node *next=NULL,*prev=NULL,*curr=head;
        while(k--){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        
        Node *newHead=prev;
        prev=NULL;
        
        while(curr){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        
        head->next=prev;
        return newHead;
    }
};
