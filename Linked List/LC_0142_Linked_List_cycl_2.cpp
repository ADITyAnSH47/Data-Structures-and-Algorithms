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
        unordered_set<ListNode*> st;
        if(head==NULL || head->next==NULL){
            return 0;
        }
        ListNode* ch=head;
        while(ch!=NULL){
            if(st.count(ch)){
                return ch;
            }
            st.insert(ch);
            ch=ch->next;
        }
        return 0;
    }
};