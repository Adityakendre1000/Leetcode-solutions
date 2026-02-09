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
    ListNode* removeElements(ListNode* head, int val) {
        // ListNode* dummy = head;

        // if(head==nullptr) return head;

        // while(dummy!= nullptr && dummy->next != nullptr){
        //     if(dummy->next->val == val){
        //         dummy->next = dummy->next->next;
        //     }
        //     if(dummy->next->val != val)
        //     dummy=dummy->next;
        // }

        // if(head->val == val) return head->next;

        // return head;


        ListNode* dummy = new ListNode(0);
        ListNode* curr = dummy;

        while(head != nullptr){
            if(head->val != val){
                curr->next = new ListNode(head->val);
                curr = curr->next;
            }

            head = head->next;
        }

        return dummy->next;
    }
};