#include <stdio.h>
#include <stdlib.h>
typedef struct _list {
    int val;
    struct _list* next;
}List;

void addNew(List* head) {
    List* temp = head->next;
    head->next = (List*)malloc(sizeof(List));
    head->next->val = 2;
    head->next->next = temp;
}
void printList(List* head) {

    
}
void IspisBroja(int broj) {
    if (broj >= 10)
        IspisBroja(broj / 10);
    printf(" %d ", broj);
    printf(" %p ", &broj);
}

List* findList(List* head, int value) {
    while (head->next != NULL) {
        if (head->next->val == value)
            return head->next;
        head = head->next;
    }
    return NULL;
}

int main() {
    List head = { .val = 0,.next = NULL };
    for(int i=0;i<5;i++)
        addNew(&head);
    printList(&head);
    List* a=findList(&head, 2);
    printf(" %d ", a->val);
    IspisBroja(4537);


}