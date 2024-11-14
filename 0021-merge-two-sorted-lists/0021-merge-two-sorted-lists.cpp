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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        // ListNode* head;
        
        // if(list1 == NULL) return list2;
        // if(list2 == NULL) return list1;

        // if(list1->val > list2->val) {
        //     head = list2;
        //     list2 = list2->next;
        // }
        // else if(list1->val == list2->val){
        //     head = list1;
        //     list1 = list1->next;
        // }
        // else {
        //     head = list1;
        //     list1 = list1->next;
        // }

        // ListNode* mover = head;

        // while(list1->next != nullptr || list2->next != nullptr){
        //     ListNode* temp;
        //     if (list1->val < list2->val){
        //         temp = list1;
        //         list1 = list1->next;
        //     }
        //     else{
        //         temp = list2;
        //         list2 = list2->next;
        //     }
        //     mover->next = temp;
        //     mover = temp;
        // }

        // while(list1){
        //     ListNode* temp;
        //     temp->next = list1;
        //     list1 = list1->next;
        //     mover->next = temp;
        //     mover = temp;
        // }

        // while(list2){
        //     ListNode* temp;
        //     temp->next = list2;
        //     list2 = list2->next;
        //     mover->next = temp;
        //     mover = temp;
        // }

        // return head;

        ListNode dummy;
        ListNode* tail = &dummy;

        // Traverse both lists and merge them into one sorted list
        while (list1 && list2) {
            if (list1->val < list2->val) {
                tail->next = list1;
                list1 = list1->next;
            } else {
                tail->next = list2;
                list2 = list2->next;
            }
            tail = tail->next;
        }

        // Append the remaining nodes from either list1 or list2
        tail->next = list1 ? list1 : list2;

        // Return the next node of the dummy as the head of the merged list
        return dummy.next;

    }
};