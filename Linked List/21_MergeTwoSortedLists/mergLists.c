/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2){
    struct ListNode* ptr1 = list1;
    struct ListNode* ptr2 = list2;
    if(ptr1 == NULL && ptr2 == NULL) return NULL;
    if(ptr1 == NULL) return ptr2;
    if(ptr2 == NULL) return ptr1;

    if(ptr1 -> val <= ptr2 -> val) {
        ptr1 -> next = mergeTwoLists(ptr1 -> next, ptr2);
        return ptr1;
    }
    else {
        ptr2 -> next = mergeTwoLists(ptr1, ptr2 -> next);
        return ptr2;
    }
}
