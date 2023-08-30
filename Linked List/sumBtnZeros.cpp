
// Link - https://leetcode.com/problems/merge-nodes-in-between-zeros/

class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        while(head!=NULL && head->val!=0) head=head->next;
        
        ListNode* ans= new ListNode(-1);
        ListNode* temp=ans;
        
        int sum=0;
        
        while(head!=NULL){
            sum+=head->val;
            if(head->val==0 && sum!=0){
                temp->next=new ListNode(sum);
                temp=temp->next;
                sum=0;
            }
            
            head=head->next;
        }
        
        return ans->next;
    }
};
