#include <iostream>
using namespace std;
 class node{
    public: int data;
    public: node* nextNode;
    node(int _data, node* _nextNode)
    {
        data = _data;
        nextNode = _nextNode;
    }
    node(int _data)
    {
        data = _data;
        nextNode = NULL;
    }
};
 class linkList{
    private: node* head = NULL;
    public: linkList()
    {

    }
    linkList(int data)
    {
        head = new node(data,NULL);
    }
    public:void addTotail(int data)
    {
        if(head == NULL)
        {
            head = new node(data,NULL);
        }
        else {
            node* p = head;
            while(p->nextNode != NULL)
            {
                p = p->nextNode;
            }
            p->nextNode = new node(data,NULL);
        }
    }
    public: void printAllitem()
    {
        if(head != NULL)
        {
            node* p = head;


            while(p->nextNode != NULL)
            {
                 cout<<p->data;
                 p = p->nextNode;
            }
             cout<<p->data;

        }
    }
    public :void insertItem(int x, int data)
    {
        if(head != NULL)
        {
            node* p = head;
            int i = 0;
            while(p->nextNode != NULL && i < x - 1)
            {
                i++;
                p = p->nextNode;
            }
            if(p->nextNode != NULL)
            {
                node* tmp = p->nextNode;
                p->nextNode=new node(data,tmp);
            }

        }
    }
    public : void deleteItem(int x)
    {
        if(head != NULL)
        {
            node* p = head;
            int i = 0;
            while(p->nextNode != NULL && i < x - 1)
            {
                i++;
                p = p->nextNode;
            }
            if(p->nextNode != NULL)
            {
                node* tmp = (p->nextNode)->nextNode;
                delete p->nextNode;
                p->nextNode=tmp;

            }

        }
    }
};
int main()
{
    linkList a(1) ;
    a.addTotail(5);
    a.addTotail(6);
    a.addTotail(7);a.addTotail(8);
    a.addTotail(9);
    a.addTotail(10);
    a.deleteItem(6);
    a.insertItem(2,6);
    a.printAllitem();

    return 0;
}
