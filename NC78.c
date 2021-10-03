//NC78 反转链表

struct ListNode* ReverseList(struct ListNode* pHead ) 
{
   // 头插法(带头结点)
    struct ListNode *pnew = (struct ListNode *)malloc(sizeof(struct ListNode));
    pnew->next = NULL;
    
    struct ListNode *s = pHead;
    struct ListNode *p;
    while (s)
    {
        p = (struct ListNode*)malloc(sizeof(struct ListNode));
        p->val = s->val;
        pnew -> val= p->val;
        
        p->next = pnew ->next;
        pnew ->next = p;
        
        s = s->next;
    }
    
    return pnew->next;
}