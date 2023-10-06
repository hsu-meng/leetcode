/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseKGroup(struct ListNode* head, int k){
    struct ListNode dummy;
    dummy.next = head;
    struct ListNode* prev = &dummy;
    struct ListNode* curr = head;
    struct ListNode* nxt = NULL;
    struct ListNode* check = head;
    for(int i = 0; i < k; i++){
        if(!check) return head;
        check = check->next;
    }
    for(int i = 0; i < k; i++){
        nxt = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nxt;
    }
    head->next = reverseKGroup(curr, k);
    return prev;
}
