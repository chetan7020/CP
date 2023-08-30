class Solution {
public:
    
    ListNode* rev(ListNode* curr){
        ListNode *prev=NULL, *next=NULL;
        
        while(curr!=NULL){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        
        return prev;
    }
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode* ans= new ListNode(-1);
        ListNode* temp=ans;
        
        l1=rev(l1);
        l2=rev(l2);
        
        int s=0, c=0;
        
        while(l1!=NULL || l2!=NULL || c){
            s=0;
            
            if(l1!=NULL){
                s+=l1->val;
                l1=l1->next;
            }
            
            if(l2!=NULL){
                s+=l2->val;
                l2=l2->next;
            }
            
            s+=c;
            
            c=s/10;
            
            temp->next= new ListNode(s%10);
            temp= temp->next;
            
        }
        
        return rev(ans->next);
    }
};