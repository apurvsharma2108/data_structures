class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* hare=head;
        ListNode* turtle=head;
        while(turtle && turtle->next){
            hare=hare->next;
            turtle=turtle->next->next;
        }
        return hare;
        
    }
};
