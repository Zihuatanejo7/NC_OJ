// 删除有序链表中重复的元素-I

class Solution {
public:
    /**
     * 
     * @param head ListNode类 
     * @return ListNode类
     */
    ListNode* deleteDuplicates(ListNode* head) 
    {
        struct ListNode *p,*q;
        
        if (head == NULL || head ->next ==NULL)
        {
            return head;
        }
        
        p = head;
        
        while (p->next)
        {
            if (p->val == p->next->val)
            {
                
                    q = p->next;
                    p->next= q->next;
                    free(q);
            }
            else
            {
                p = p->next;
            }
        }
        return head;
    }
};