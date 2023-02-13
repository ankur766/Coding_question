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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
   ListNode*newlist=new ListNode(0);
        ListNode*temp=newlist; // declare tem list
        
        int carry=0;
        while(l1 && l2)
        {
            int sum=l1->val+l2->val+carry; // store sun of l1 and l2 + carry 
                carry= sum/10; // store carry 
            
                temp->next= new ListNode(sum%10); //store  value in temp sum %10  % give rem of number
                
             temp=temp->next;
            l1=l1->next; 
            l2=l2->next;
           
            
            
        }
        while(l1)
        {
             int sum=l1->val+carry;
                carry= sum/10;
            
                temp->next= new ListNode(sum%10);
                
             temp=temp->next;
            l1=l1->next; 
        
           
            
            
        }
          while(l2)
        {
             int sum=l2->val+carry;
                carry= sum/10;
            
                temp->next= new ListNode(sum%10);
                
             temp=temp->next;
            l2=l2->next; 
        
           
            
            
        }
        if(carry!=NULL)
        {
            temp->next=new ListNode(carry);
        }
        return newlist->next;
}
};


