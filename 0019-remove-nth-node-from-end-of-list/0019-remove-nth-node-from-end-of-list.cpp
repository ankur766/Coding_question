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
    ListNode*reverse(  ListNode*temp)
      {ListNode* curr=temp;
         ListNode* prev=NULL;
         ListNode* next=NULL;
        if(temp==NULL || temp->next==NULL)
        {
            return temp;
        }
         
        while(curr!=NULL)
        {
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
          
      }
    
    ListNode* removeNthFromEnd(ListNode* head, int n) {
         head=reverse(head); // fun call for reverse the  linkedlist
        ListNode*temp=head; // temp=head 
        if(head==NULL||head->next==NULL && n==1) // check contion if head==NULL  nor head .next = null and b=n==1 then we will return null
        {
            return NULL;
        }
        
        
        if(n-1==0) // if n=1 means it delete the head of the list
            
        {ListNode*next=temp->next; // store the add of the temp .next   
         delete temp;  // here delete the head a
         head=next; // assign new head 
         head=reverse(head); // aftr that we will reverse the  list
           return head; 
        }
        
        
        int count =1;
        
        while(temp->next!=NULL)    
        {if(count==n-1)
        {
        ListNode *next=temp->next->next; // store address of temp next.next address 
             delete temp->next;  
        temp->next=next;
            
        }
         else{
        temp=temp->next;}
         count++;
            
        }
        
         head=reverse(head);
        return head;
        
    }
};