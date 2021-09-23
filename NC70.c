// 单链表的排序

struct ListNode* sortInList(struct ListNode* head ) 
{
    if (head ==NULL)
        return head;
    
    struct ListNode *pi = head;
    struct ListNode *pj = head;
    
    for (pi = head;pi != NULL;pi = pi->next)
    {
        for (pj = pi; pj != NULL;pj = pj->next)
        {
            if (pi->val > pj->val)
            {
                int temp = pi->val;
                pi->val = pj->val;
                pj->val = temp;
            }
        }
    }
    
    return head;
}