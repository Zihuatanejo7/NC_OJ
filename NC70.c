// µ¥Á´±íÅÅĞò

struct ListNode* sortInList(struct ListNode* head ) 
{
    struct ListNode* pi,* pj;
    for (pi = head;pi->next != NULL;pi = pi->next)
    {
        for (pj = pi->next;pj != NULL;pj = pj->next)
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