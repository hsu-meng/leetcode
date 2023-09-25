/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* middleNode(struct ListNode* head){
    int mid = nodeCount(head) / 2;
    struct ListNode* ptr = head;
    for(int i = 0; i < mid; i++) {
        ptr = ptr -> next;
    }
    return ptr; 
    
}
int nodeCount(struct ListNode* head) {
    int count = 0;
    struct ListNode* current = head;
    while(current) {
        count++;
        current = current -> next;
    }
    return count;
}
