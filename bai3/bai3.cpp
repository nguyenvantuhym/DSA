#include <iostream>
using namespace std;
class Node
{
   public:  int data;
   public: Node* next;
   public: Node *previous;
    public: Node(int _data)
    {
        data = _data;
        next = NULL;
        previous = NULL;
    }
    public :Node(int _data,Node * _next, Node* _previous)
    {
        data = _data;
        next = _next;
        previous = _previous;
    }
};
 class linkList{
    Node* head = NULL;
    public:int Size =0;
    linkList()
    {

    }
public :    linkList(int data)
    {
        head =new Node(data,NULL,NULL);
    }
    public : void insertToTail(int data)
    {
        if(head == NULL)
        {
            head =new Node(data,NULL,NULL);
        }else
        {
            Node*p=head;
            while(p->next != NULL)
            {
                p=p->next;
            }
            p->next = new Node(data,NULL,p);
        }
    }
     public: void printAllitem()
    {
        if(head != NULL)
        {
            Node* p = head;


            while(p->next != NULL)
            {
                 cout<<p->data;
                 p = p->next;
            }
             cout<<p->data;

        }
    }
     public : void deleteItem(int x)
    {
        if(head != NULL)
        {
            Node* p = head;
            int i = 0;
            while(p->next != NULL && i < x )
            {
                i++;
                p = p->next;
            }
            if(p->next != NULL)
            {
                (p->previous)->next =p->next;
                (p->next)->previous = p->previous;
                delete p;
            }
            else {
                 (p->previous)->next =NULL;
                    delete p;
            }
        }
    }
    public:void logic()
    {
        sizeLinlList();

       if(Size > 2)
       {
            Node* p =head->next;
            int i=1;
            while((p->next) !=NULL)
            {
                if(((p->previous)->data +p->data + (p->next)->data)%2 ==0)
                {
                    deleteItem(i);
                    cout<<endl;
                    printAllitem();
                   logic();
                   return;
                }
                i++;
                p =p->next;
            }
       }
    }
    public: void sizeLinlList()
    {
        if(head != NULL)
        {
            Node* p = head;
            int i =1;
            while (p->next != NULL)
            {
                i++;
                p=p->next;
            }
            Size =i;

        }

    }
};
int main()
{
    linkList a(1);
    a.insertToTail(5);
     a.insertToTail(6);
      a.insertToTail(1);
       a.insertToTail(2);
       a.insertToTail(2);

    a.printAllitem();
    a.logic();
    cout<<endl;
    a.printAllitem();
    return 0;
}
