#include <iostream>
using namespace std;
 class Node{
    public: int data;
    public:Node* next;
    public:Node(int _data,Node* _next)
    {
        data = _data;
        next = _next;
    };
};
 class Queue{
    Node* input= NULL;
    Node* output = NULL;
    public: Queue(int data)
    {
        if(input ==NULL)
           {
               input = new Node(data,NULL);
               output = input;
           }
    }

    public:void enQueue(int data)
    {
        if(input ==NULL) {
            if(input ==NULL)
           {
               input = new Node(data,NULL);
               output = input;
           }
        }
        else {
            Node* p = new Node(data,NULL);
            input->next = p;
            input= p;
        }
    }
    public:deQueue()
    {
        if(output != NULL)
        {
            Node * p;
            p = output->next;
            delete output;
            output = p;
        }
    }
    public: void ShowAll()
    {
        Node* p = output;
        while ( p != input)
        {
           cout<< p->data<<" ";
           p=p->next;
        }
        if( p ==input) cout<<p->data;
    }
};
int main()
{
    Queue a(5);
    a.enQueue(4);
    a.enQueue(3);
    a.enQueue(2);
    a.enQueue(1);
    a.deQueue();
    a.ShowAll();
    return 0;
}
