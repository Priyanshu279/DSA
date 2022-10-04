#include<bits/stdc++.h>
using namespace std;

struct node
{
    node*next;
    int data;

    node(int x)
    {
        data=x;
        next=NULL;
    }
};

void display(node*head)
{
    node*cur=head;
    while(cur!=NULL)
    {
        cout<<cur->data<<endl;
        cur=cur->next;
    }

}

int main()
{
    struct node*first=new node(10);
    struct node*second=new node(20);
    struct node*third=new node(30);
    struct node*fourth=new node(40);

    first->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=NULL;

    display(first);

}