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
        ListNode* t = head;
        ListNode* h = head;

        while(t && h  && t->next && h->next && h->next->next){
            h=h->next;
            if(t == h){
                return true;
            }
            else{
                t = t->next;
                h = h->next;
            }
        }
        return false;
    }
};