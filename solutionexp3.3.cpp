class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
         if(!head || !head->next) return head;
        int count = 0;
        ListNode* temp = head;
        while (temp) {
            count++;
            temp = temp->next;
        }
        k = k % count;
        if(k==0) return head;
        
        temp = head;
       for (int i = 1; i < count - k; i++) {
            temp = temp->next;
        }
        ListNode* pre = temp->next;
        temp->next = NULL;
        ListNode* prevv = pre;
        while (prevv->next) {
            prevv = prevv->next;
        }
        prevv->next = head;
      
        return pre;
    }
};