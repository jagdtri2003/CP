#include <stdio.h>

struct Node{
    int data;
    struct Node * next;
};

struct Node* reverseList(struct Node *head){
        struct Node * t1,*t2,*t3;
        t1=NULL;
        t2=head;
        while(t2!=NULL){
            t3=t2->next;
            t2->next=t1;
            t1=t2;
            t2=t3;
        }
        head=t1;
        return head;
        
    }