//https://leetcode.com/problems/next-greater-node-in-linked-list/

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
    
    vector<int> nextLargerNodes(ListNode* head) {
        head = rev(head);
        
        stack<int> stk;
        vector<int> ans;
        
        while(head!=NULL){
            while(!stk.empty() && stk.top()<=head->val) stk.pop();
            
            if(stk.empty()) ans.push_back(0);
            else ans.push_back(stk.top());
            
            stk.push(head->val);
            head=head->next;
        }
        
        reverse(ans.begin(), ans.end());
        
        return ans;
    }
};