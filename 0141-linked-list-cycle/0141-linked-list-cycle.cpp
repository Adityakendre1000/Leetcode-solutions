/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        // ListNode* t = head;
        // ListNode* h = head;

        // while(t && h  && t->next && h->next && h->next->next){
        //     h=h->next;
        //     if(t == h){
        //         return true;
        //     }
        //     else{
        //         t = t->next;
        //         h = h->next;
        //     }
        // }
        // return false;

        if(head == nullptr || head->next == nullptr) return false;

        ListNode* slow = head;
        ListNode* fast = head;

        while(fast != nullptr && fast->next != nullptr){
            slow = slow->next;
            fast = fast->next->next;

            if(slow == fast) return true;

        }
        return false;
    }
};