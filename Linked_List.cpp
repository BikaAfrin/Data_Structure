#include<bits/stdc++.h>
using namespace std;
struct node
{
    int x;
    node* next;
    node* prev;
};
class List
{
    public:
    node* head;
    List()
    {
        head=NULL;
    }
    //Create new node
    node *getnewnode(int info)
    {
        node* newnode=new node();
        newnode->x=info;
        newnode->next=NULL;
        newnode->prev=NULL;
        return newnode;
    }
    //first
    void insert_at_first(int data)
    {
        node* shafiur=getnewnode(data);
        if(head==NULL)
        {
            head=shafiur;
            return;
        }
        shafiur->next=head;
        head->prev=shafiur;
        head=shafiur;
    }
    //last
    void insert_at_last(int data)
    {
        node* aneen=getnewnode(data);
        node* temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=aneen;
        aneen->prev=temp;
    }
    //middle
    void insert_at_any_position(int position,int data)
    {
        node* ankon=getnewnode(data);
        node* temp=head;
        for(int i=1;i<position-1;i++)
        {
            temp=temp->next;
        }
        node* temp1=temp->next;
        temp->next=ankon;
        ankon->prev=temp;
        ankon->next=temp1;
        temp1->prev=ankon;
    }
    //searching item
    void search_item(int item)
    {
        node* temp=head;
        while(temp!=NULL)
        {
            if(temp->x==item)
            {
                cout<<"Found"<<endl;
                break;
            }
            else
            {
                temp=temp->next;
            }
        }
    }
    //delete first
    void delete_from_first()
    {
        node* temp=head;
        head=head->next;
        delete temp;
    }
    //delete last
    void delete_from_last()
    {
        node* temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        node* temp1=temp->prev;
        delete temp;
        temp1->next=NULL;
    }
    //delete any position
   void delete_from_any_position(int pos)
   {
       node* temp=head;
       if(pos==1){ delete_from_first(); }
       else if(pos==size_list()){ delete_from_last(); }
       else{
            for(int i=1;i<pos-1;i++)
           {
               temp=temp->next;
           }
           node* temp2=temp->next->next;
           temp->next=temp2;
           temp2->prev=temp;
           delete temp->next;
       }
   }
    //traversal
    void traversal()
    {
        print();
    }
    //size
    int size_list()
    {
        int count1=0;
        node* temp=head;
        while(temp!=NULL)
        {
            count1++;
            temp=temp->next;
        }
        cout<<"Size - "<<count1<<endl;
        return count1;
    }
    //print
    void print()
    {
        node* temp=head;
        cout<<"Print - ";
         while(temp!=NULL)
        {
            cout<<temp->x<<" ";
            temp=temp->next;
        }
    }
};
int main()
{
    List L;
    // L.getnewnode(int info);
     L.insert_at_first(10);
     L.insert_at_first(3);
     L.insert_at_first(8);
     L.insert_at_first(10);
     L.insert_at_first(1);
     L.insert_at_first(100);
     L.insert_at_first(4);
     L.insert_at_last(2);
     L.insert_at_any_position(2,7);
     L.print();
     L.size_list();
     L.search_item(10);
     L.delete_from_first();
     L.print();
     L.size_list();
     L.delete_from_last();
     L.print();
     L.size_list();
     L.delete_from_any_position(1);
     L.print();
     L.traversal();
}


