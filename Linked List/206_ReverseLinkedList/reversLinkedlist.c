/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head){
    struct ListNode* new_head = NULL;
    struct ListNode* current = head;
    struct ListNode* prev = NULL;

    while(current) {
        prev = current -> next;
        current -> next = new_head;
        new_head = current;
        current = prev;
    }
    return new_head;
}
