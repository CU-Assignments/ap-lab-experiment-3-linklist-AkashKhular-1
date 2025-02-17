class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if(!head || !head->next) return nullptr; 
        ListNode*slow = head; 
        ListNode*fast = head->next->next; 
        while(fast !=nullptr && fast->next != nullptr){
            fast = fast->next->next; 
            slow = slow->next; 
        }
        ListNode*delnode = slow->next;
        slow->next =slow->next->next; 
        delete delnode; 
        return head;  
    
    }

};