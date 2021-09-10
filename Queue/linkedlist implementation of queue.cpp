#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
};
class queue{
    public:
    Node* front = NULL;
    Node* rare = NULL;
    
    void enqueue(int value) {
        Node* temp = new Node();
        temp->data = value;
        temp->next = NULL;
        if (front == NULL && rare == NULL)
        {
            front=rare=temp;
        }
        else
        {
            rare->next = temp;
            rare = temp;
        }
    }
    void dequeue() {
        Node* temp = front; 
        if (front==NULL&&rare==NULL)
        {
            cout<<"\nEmpty Queue\n";
        }
        else if (front==rare)
        {
            front=rare=NULL;
        }
        else
        {
            front = front->next;
        }
        delete(temp);
        
        
    }

};

int main() {
    queue ll;
    ll.enqueue(1);
    ll.enqueue(2);
    ll.dequeue();
    ll.dequeue();
    ll.dequeue();
    return 0;
}