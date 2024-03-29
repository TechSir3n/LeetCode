



class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* dummy = new ListNode(0, head); // we create fictive node
        ListNode* prev = dummy; 
        while (head != NULL)
        {
            if (head->next != NULL && head->val == head->next->val)
            {
                while (head->next != NULL && head->val == head->next->val)
                    head = head->next;
                prev->next = head->next; 
            }
            else
                prev = head;
            head = head->next;
        }
        return dummy->next; // we return head
    }
};
