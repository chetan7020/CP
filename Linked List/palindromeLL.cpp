class Solution {
public:
    
    ListNode* rev(ListNode* curr){
        
        ListNode* prev=NULL;
        ListNode* next=NULL;
        
        while(curr!=NULL){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        
        return prev;
    }
    
    bool isPalindrome(ListNode* head) {
        
        if(head==NULL) return true;
        
        ListNode* slow=head;
        ListNode* fast=head;
        
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        
        fast = rev(slow->next); 
        slow->next = NULL;
        
        
        while(head != NULL && fast != NULL){
            if(head->val != fast->val) return false;
            head = head->next;
            fast = fast->next;
        }
        
        return true;
    }
};
