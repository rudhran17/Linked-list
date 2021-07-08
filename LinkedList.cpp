#include<iostream>
using namespace std;
class Llist{
public:
    int data;
    Llist *next;
};
void printList(Llist *n){
    while(n!=NULL){
        cout<<n->data<<" ";
        n=n->next;
    }
}
int main(){
    Llist *head = NULL;
    Llist *second = NULL;
    Llist *third = NULL;
    // allocating in the heap
    head = new Llist();
    second = new Llist();
    third = new Llist();
    head->data = 1;
    head->next = second;
    second->data = 2;
    second->next = third;
    third->data = 3;
    third->next = NULL;
    printList(head);
    return 0;


}