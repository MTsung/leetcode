/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    struct ListNode* nowNode = (struct ListNode*)malloc(sizeof(struct ListNode) * 1);
    struct ListNode* head = NULL;
    int temp = 0;//進位
    while(l1 || l2){
        struct ListNode *newNode = (struct ListNode *) malloc(sizeof(struct ListNode));
        newNode->next = NULL;
        newNode->val = (l1 ? l1->val : 0) + (l2 ? l2->val : 0) + temp;
        temp = newNode->val / 10;
        newNode->val %= 10;
        
        if(head == NULL){
            head = newNode;
        }else{
            nowNode->next = newNode;
        }
        nowNode = newNode;
        
        if(l1){
            l1 = l1->next;
        }
        if(l2){
            l2 = l2->next;
        }
    }
    if(temp == 1){
        struct ListNode *newNode = (struct ListNode *) malloc(sizeof(struct ListNode));
        newNode->next = NULL;
        newNode->val = 1;
        nowNode->next = newNode;
    }
    return head;
}