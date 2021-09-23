   // 删除链表中倒数第n个元素

 ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
        if (n < 1 || head ==NULL)
            return NULL;
        
        struct ListNode* fast = head;
        struct ListNode* slow = head;
        
        int i = 0;
        while (i < n)
        {
            fast = fast->next;
            i++;
        }
        
        if (!fast)
            return head->next;
        
        
        while (fast->next)
        {
            fast = fast->next;
            slow = slow->next;
        }
        
        struct ListNode *q = (struct ListNode*)malloc(sizeof(struct ListNode));
        q = slow->next;
        slow->next= q->next;
        free(q);
        
        return head;
        
    }；