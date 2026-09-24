// https://leetcode.com/problems/linked-list-cycle/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head) {
    struct ListNode *lento = head;
    struct ListNode *rapido = head;

    while (rapido != NULL && rapido->next != NULL) {
        lento = lento->next;
        rapido = rapido->next->next;

        if (lento == rapido) {
            return true;
        }
    }

    return false;
}
