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
    ListNode *detectCycle(ListNode *head) {
        ListNode *st=head;
        ListNode *end=head;
        while(st && st->next!=NULL){
            st=st->next->next;
            end=end->next;

            if(st==end){
                end=head;
                while(end!=st){
                    st=st->next;
                    end=end->next;
                }
                return st;

            }
        }
        return NULL;
        
    }
};