#include <stdio.h>
#include <stdlib.h>
struct ListNode {
    int val;
    struct ListNode *next;
};
struct ListNode* removeElements(struct ListNode* head, int val) 
{
    while(head != NULL && head->val == val)
    {
        head = head->next;
    }
    struct ListNode* temp = head;
    while(temp != NULL && temp->next != NULL)
    {
        if(temp->next->val == val)
        {
            temp->next = temp->next->next;
        }
        else
        {
            temp = temp->next;
        }
    }
    return head;
}
struct ListNode* createList(int n)
{
    struct ListNode* head = NULL; 
    struct ListNode* temp = NULL;
    struct ListNode* newNode;
    int x;
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &x);
        newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
        newNode->val = x;
        newNode->next = NULL;
        if(head == NULL)
        {
            head = newNode;
            temp = newNode;
        }
        else
        {
            temp->next = newNode;
            temp = newNode;
        }
    }
    return head;
}
void printList(struct ListNode* head)
{
    while(head != NULL)
    {
        printf("%d -> ", head->val);
        head = head->next;
    }
    printf("NULL\n");
}
int main()
{
    int n, val;
    printf("Enter number of nodes: ");
    scanf("%d", &n);
    printf("Enter linked list elements:\n");
    struct ListNode* head = createList(n);
    printf("Enter value to remove: ");
    scanf("%d", &val);
    head = removeElements(head, val);
    printf("Updated Linked List:\n");
    printList(head);
    return 0;
}