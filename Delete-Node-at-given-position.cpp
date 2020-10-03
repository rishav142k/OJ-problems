//  Hackerrank : Delete Given position
//  Executed time: 0.06s
//  Domain: Linked-list

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class Node 
{   public:
    int data;
    Node* next;
};


void InLast(Node** head, int x)                       //  First of all..... Make insertion of Nodes at the end of linked list...  
{
    Node* new_node = new Node();                
    new_node->data = x;
    new_node->next = NULL;
    if(*head==NULL)
    {
        *head = new_node;
    return;
    }
    
        Node* ptr = *head;
        while(ptr->next!=NULL)
        {
            ptr = ptr->next;
        }
         
         ptr->next=new_node;

}
void del_bef_no(Node** head, int pos)                // This is the function to remove the node at any position.
{
        Node *ptr = *head;
        Node * pptr = *head;
    if(pos==0)
    {
        ptr->next =*head;
    }
        for(int i=0;i<pos;i++)
        {
            pptr = ptr;
            ptr=ptr->next;
        }
   
        pptr->next = ptr->next;
        ptr->next =NULL;
}
void print(Node *head)
{ 
    while(head)
    {     
        cout<<head->data;
        head = head->next;
        if(head)
            cout<<"->";
    }
}

int main() {
   
    Node* head = NULL;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        InLast(&head, a);
    }
    
   int b;
    cin>>b;
   del_bef_no(&head, b);
    print(head);
    return 0;
}
