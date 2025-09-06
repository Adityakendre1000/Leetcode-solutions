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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {

        if(headA == nullptr && headB == nullptr) return NULL;

        ListNode* x = headA;
        ListNode* y = headB;

        // unordered_set<ListNode*> visited;

        // while(x && y){
        //     if(visited.find(x) != visited.end()) return x;
        //     visited.insert(x);
        //     x = x->next;
        //     if(visited.find(y) != visited.end()) return y;
        //     visited.insert(y);
        //     y = y->next;
        //     // else{
        //     //     visited.insert(x);
        //     //     visited.insert(y);
        //     //     x = x->next;
        //     //     y = y->next;
        //     // }
        // }
        
        // while(x){
        //     if(visited.find(x) != visited.end()) return x;
        //     else{
        //         visited.insert(x);
        //         x = x->next;
        //     }
        // }
        // while(y){
        //     if(visited.find(y) != visited.end()) return y;
        //     else{
        //         visited.insert(y);
        //         y = y->next;
        //     }
        // }

        unordered_map<ListNode*,int> visited;
        while (x) {
            visited[x] = 1;
            x = x->next;
        }

        while (y) {
            if (visited[y] == 1) return y;  // found intersection
            y = y->next;
        }

        return NULL;
    }
};