/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseBetween(struct ListNode* head, int left, int right){
        if(head == NULL || head->next == NULL || left == right) return head;
        struct ListNode dummy;
        dummy.next = head;

        struct ListNode* L = &dummy;
        for(int i = 1; i < left; i++) {
            L = L->next;
        }
        
        struct ListNode* curr = L->next;
        for(int i = left; i < right; i++) {
            struct ListNode* rev = curr->next; //Node for reversing the linked list
            curr->next = rev->next;
            rev->next = L->next;
            L->next = rev;
        }
        return dummy.next;
}
