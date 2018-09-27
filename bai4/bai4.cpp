#include <iostream>
using namespace std;
class Node{
    public :int data;
    public: Node * next;
    Node(int _data,Node* _next)
    {
        data = _data;
        next = _next;
    }
};
class Stack{
    Node* point;
    public: Stack(int data)
    {
        point = new Node(data,NULL);
    }
    public: void push(int data)
    {
        Node* tmp = new Node(data,point);
        point = tmp;
    }
    public: void pop()
    {
        cout<<point->data<<endl;
        Node* tmp = point;
        point = point->next;
        delete tmp;
    }
    public: void showStack()
    {
        Node* p = point;
        while(p->next != NULL)
        {
            cout<<p-> data;
            p=p->next;
        }
        cout<<p-> data;
        cout<<endl;
    }
};
int main()
{
    Stack a(1);
    a.push(2);
    a.push(3);
    a.push(4);
    a.pop();
    a.pop();
    a.push(5);
    a.showStack();
    return 0;
}
