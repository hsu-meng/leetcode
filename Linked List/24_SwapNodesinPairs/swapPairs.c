/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* swapPairs(struct ListNode* head){
    struct ListNode dummy;
    dummy.next = head;
    struct ListNode* current = head;
    struct ListNode* prev = &dummy;

    while(current && current->next){
        prev->next = current->next;
        current->next = prev->next->next;
        prev->next->next = current;

        prev = current;
        current = current->next;
    }
    return dummy.next;
}
