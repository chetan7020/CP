// https://leetcode.com/problems/add-two-numbers/

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* num1, ListNode* num2) {

        ListNode* temp=num1, *prev=NULL;
        
        int s=0,c=0;

        while(num1!=NULL || num2!=NULL || c){
            s=0;
            s+=c;
        
            if(num2!=NULL){
                s+=num2->val;
                num2=num2->next;
            }
            
            if(num1!=NULL){
                s+=num1->val;
                num1->val=s%10;
            }
            c=s/10;
            
            
            if(num1==NULL){
                prev->next= new ListNode(s%10);
                prev=prev->next;
            }else{
                prev=num1;
                num1=num1->next;                
            }

        }

        return temp;   
    }
};