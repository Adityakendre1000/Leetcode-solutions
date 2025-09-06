/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        // if(head == nullptr) return head;
        // ListNode dummy;
        // // ListNode* tail = &dummy;
        // dummy.next = head;

        // while(head->next){
        //     if(head->val == head->next->val){
        //         head->next = head->next->next;
        //     }
        //     else{
        //         head = head->next;
        //     }
        // }
        // return dummy.next;

        ListNode* tail = head;

        while(tail != nullptr && tail->next != nullptr){
            if(tail->val == tail->next->val){
                ListNode* removeDupe = tail->next;
                tail->next = tail->next->next;
                delete removeDupe;
            }
            else{
                tail = tail->next;
            }
        }
        return head;
    }
};