#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insertAtTail(node *&head, int val)
{
    node *n = new node(val);
    // if there is no any node in my linked list
    if (head == NULL)
    {
        head = n;
        return;
    }
    //traverse throuh linked list from head as temp and if the next of temp i.e head here is not null
    //then through it to the value whose address is stored in the next of the temp i.e heas here .
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

void insertAthead(node *&head, int val)
{
    node *n = new node(val);
    n->next = head;
    head = n;
}

bool search(node *head, int key)
{
    node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == key)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}
void deleteAthead(node *&head)
{
    if (head == NULL)
    {
        return;
    }
    node *todelete = head;
    head = head->next;

    delete todelete;
}
void deletion(node *&head, int val)
{
    if (head == NULL)
    {
        return;
    }
    if (head->next == NULL)
    {
        deleteAthead(head);
        return;
    }

    node *temp = head;
    while (temp->next->data != val)
    {
        temp = temp->next;
    }
    node *todelete = temp->next;
    temp->next = temp->next->next;
    delete todelete;
}

node *
reverseLL(node *&head) //This is iterative way================
{
    node *previousptr = NULL;
    node *currentptr = head;
    node *nextptr;

    while (currentptr != NULL)
    {
        nextptr = currentptr->next;
        currentptr->next = previousptr;

        previousptr = currentptr;
        currentptr = nextptr;
    }
    return previousptr; //yachyanntr display function jagyav khelal...aplyala kaay taan ny
}

void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

// node *reverseByrecursive(node *&head)
// {
//     if (head == NULL || head->next == NULL)
//     {
//         return head;
//     }
//     node *newhead = reverseByrecursive(head->next);
//     head->next->next = head;
//     head->next = NULL;

//     return newhead;
// }

node *reverseKnode(node *&head, int k)
{

    node *previousptr = NULL;
    node *currentptr = head;
    node *nextptr;

    int count = 0;

    while (count < k && currentptr != NULL)
    {
        nextptr = currentptr->next;
        currentptr->next = previousptr;

        previousptr = currentptr;
        currentptr = nextptr;
        count++;
        
   }

    if (nextptr != NULL)
    {
        head->next = reverseKnode(nextptr, k);
    }
    return previousptr;
}

int main()
{
    node *head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    insertAtTail(head, 6);
    //display(head);
    //  insertAthead(head, 4); //inserting this element at the begining of our linked list
    // insertAthead(head, 5);
    display(head);
    //cout << search(head, 5) << endl;
    //cout << search(head, 6) << endl;
    //deletion(head, 2);
    //display(head);
    //deleteAthead(head);
    //display(head);

    //node *newreversed = reverseLL(head);
    // display(newreversed);
    int k = 2;
    node *newhead = reverseKnode(head, k);
    display(newhead);
    return 0;
}