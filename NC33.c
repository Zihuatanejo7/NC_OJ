// 合并两个排序的链表

struct ListNode* Merge(struct ListNode* pHead1, struct ListNode* pHead2 ) 
{
    // write code here
    struct ListNode *pnew = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode *r = pnew;
    
    struct ListNode* p1 = pHead1;
    struct ListNode* p2 = pHead2;
    
    struct ListNode *s;
    
    while (p1&&p2)
    {
        if (p1->val < p2->val)
        {
            s = (struct ListNode*)malloc(sizeof(struct ListNode));
            s->val = p1->val;
            r->next = s;
            r = s;
            
            p1 = p1->next;
        }
        else
        {
            s = (struct ListNode*)malloc(sizeof(struct ListNode));
            s->val = p2->val;
            r->next = s;
            r = s;
            
            p2 = p2->next;
        }
    }
    
    if (p1==NULL)
    {
        
        while (p2)
        {
            s = (struct ListNode*)malloc(sizeof(struct ListNode));
            s->val = p2->val;
            r->next = s;
            r = s;
            
            p2 = p2->next;
        }
        r->next = NULL;
        return pnew->next;
    }
    
    if (NULL == p2)
    {
        
        while(p1)
        {
            s = (struct ListNode*)malloc(sizeof(struct ListNode));
            s->val = p1->val;
            r->next = s;
            r = s;
            
            p1 = p1->next;
        }
        r->next = NULL;
        return pnew->next;
    }
    
    return pnew->next;
}