
/*
struct Node
{
    int data;
    Node* next;
    Node(int x) {  data = x;  next = NULL; }
}; */

class Solution
{
    public:
    //Function to count nodes of a linked list.
    int getCount(struct Node* head){
    
        struct Node *t1=head;
        int count=0;
        while(t1!=NULL){
            count++;
            t1=t1->next;
        }
        
        return count;
        //Code here
    
    }
};
    