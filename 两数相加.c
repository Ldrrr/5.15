struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2)
{
	int t=0,s=0;
	struct ListNode* head=(struct ListNode*)malloc(sizeof(struct ListNode));
	struct ListNode* r;
	r=head;
	head->next=NULL;
	while(l1||l2||t!=0)
	{ 
		int l1val = l1!=NULL ? l1->val:0;
		int l2val = l2!=NULL ? l2->val:0;
		s=l1val+l2val+t;
		t=s/10;
		s=s%10;
		struct ListNode* q=(struct ListNode*)malloc(sizeof(struct ListNode));
		q->val=s;
		r->next=q;
		r=q;
		if(l1!=NULL) l1=l1->next;
		if(l2!=NULL) l2=l2->next;
		
	}
	r->next=NULL;
	return head->next;
 }
